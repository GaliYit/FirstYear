def consistent_with_ohm(voltage, current, resistance):
    v = current * resistance
    if voltage == v:
        return True
    return False


def clac_volt(current, resistance):
    v = current * resistance
    return v


def clac_current(voltage, resistance):
    c = voltage / resistance
    return c


def clac_resistance(voltage, current):
    r = voltage / current
    return r


def check_input(voltage, current, resistance):
    num_of_question_mark = 0
    values = [voltage, current, resistance]

    for v in values:
        if v == '?':
            num_of_question_mark += 1

    if num_of_question_mark > 1:
        msg = 'Values are not properly set'
        raise Exception(msg)


def ohm_law(voltage, current, resistance):
    check_input(voltage, current, resistance)

    if voltage == '?':
        voltage = clac_volt(current, resistance)
    elif resistance == '?':
        resistance = clac_resistance(voltage, current)
    elif current == '?':
        current = clac_current(voltage, resistance)
    else:
        are_consistent_with_ohm = consistent_with_ohm(voltage, current, resistance)
        if are_consistent_with_ohm is False:
            msg = 'Voltage, Current and Resistance arent consistent with ohm law'
            raise Exception(msg)

    return voltage, current, resistance
