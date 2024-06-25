#include <stdio.h>

void ageFunc()
{
    int age;
    printf("Please enter an age between 0-120:\n");
    do {
        scanf("%d", &age);
        if (!(0 <= age && age <= 120))
            printf("Wrong age, please Try again\n");
    }
    while (!(0 <= age && age <= 120));

    switch (age)
    {
        case 0 ... 2:
            printf("Baby\n");
            break;
        case 3 ... 11:
            printf("Child\n");
            break;
        case 12 ... 17:
            printf("Teen\n");
            break;
        case 18 ... 64:
            printf("Adult\n");
            break;
        case 65 ... 75:
            printf("Senior\n");
            break;
        default: // 76-120
            printf("Elderly\n");
            break;
    }
}

void operationsBetweenTwoNum()
{
    int num1, num2;
    float result;
    char operator;
    printf("Please enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    printf("Please enter one of four operators + - * /:\n");
    do{
        scanf(" %c", &operator);
        if (!(operator == '+'||operator=='-'||operator=='*'||operator=='/'))
            printf("ERROR\nPlease try again:\n");
    }
    while (!(operator == '+'||operator=='-'||operator=='*'||operator=='/'));

    if (operator == '/' && num2 == 0)
        printf("Cannot divide by 0");
    else
    {
        switch (operator)
        {
            case '+':
                result = (float)num1+(float)num2;
                break;
            case '-':
                result = (float)num1-(float)num2;
                break;
            case '*':
                result = (float)num1*(float)num2;
                break;
            default: // deviation
                result = (float)num1/(float)num2;
                break;
        }
        printf("The result is: %f\n", result);
    }
}

void triangleType() {
    int side1, side2, side3;
    printf("Please enter 3 numbers (bigger then 0) and I will tell you if it's a triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (!(side1 >= 0 && side2 >= 0 && side3 >= 0))
        printf("ERROR\n");
    else if (side1 > (side2 + side3) || side2 > (side1 + side3) || side3 > (side2 + side1))
        printf("It's not a triangle :(\n");
    else
    {
        if (side1 == side2 && side1 == side3)
            printf("Equilateral triangle\n");
        else if (side1 == side2 && side1 != side3 || side1 == side3 && side3 != side2 ||
                 side2 == side3 && side2 != side1)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    }
}

//323029926
int main() {
    //ageFunc();                           //First question
    //operationsBetweenTwoNum();           //Second question
    triangleType();                      //Third question
    return 0;

}