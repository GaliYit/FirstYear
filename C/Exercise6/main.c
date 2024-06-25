#include <stdio.h>
#include <string.h>

typedef struct Time{
    int hour;
    int minute;
}Time;

typedef struct Address{
    char streetName[20];
    int houseNum;
    char cityName[20];
}Address;

typedef struct Contact{
   char firstName[20];
   char lastName[20];
   char phoneNum[10];
   Address address;
}Contact;

Time scanTime()
{
    Time time;
    printf("Please enter the hour:\n");
    scanf("%d", &time.hour);
    printf("Please enter the minutes:\n");
    scanf("%d", &time.minute);
    return time;
}

void printTime(Time time)
{
    printf("%d:%d", time.hour, time.minute);
}

int IsTimeValid (Time time)
{
    if (time.hour>=0 && time.hour<=24 && time.minute<60 && time.minute>=0)
        return 1;
    else
        return 0;
}

Time UpdateTime(Time time, int minutes)
{
    while (time.minute+minutes>60)
    {
        minutes-=60;
        time.hour++;
    }
    time.minute += minutes;
    return time;
}

void PrintAddress(Address address)
{
    printf("Address - ");
    printf("%s, ", address.streetName);
    printf("%d, ", address.houseNum);
    printf("%s\n", address.cityName);
}

void PrintContact(Contact contact)
{
    printf("%s ", contact.firstName);
    printf("%s -\n", contact.lastName);
    printf("Phone number- %s\n", contact.phoneNum);
    PrintAddress(contact.address);
}
void PrintContactsArr(Contact contacts[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("\n");
        PrintContact(contacts[i]);
    }
}
void PrintContactByFirstName(Contact contacts[], int size, char name[])
{
    for (int i=0; i<size; i++) {
        if (!strcmp(contacts[i].firstName, name))
        {
            printf("\n");
            PrintContact(contacts[i]);
        }
    }
}

void PrintContactInfo(Contact contacts[], int size, char contactFirstName[], char contactLastName[])
{
    for (int i=0; i<size; i++) {
        if (!strcmp(contacts[i].firstName, contactFirstName) && !strcmp(contacts[i].lastName, contactLastName))
        {
            printf("\n");
            printf("Phone number - %s\n", contacts[i].phoneNum);
            PrintAddress(contacts[i].address);
        }
    }
}

void PrintContactsInCity(Contact contacts[], int size, char city[])
{
    printf("\nLives in %s:", city);
    for (int i=0; i<size; i++) {
        if (!strcmp(contacts[i].address.cityName, city))
        {
            printf("\n");
            PrintContact(contacts[i]);
        }
    }
}
int main() {
    Time userTime = {15,30};
    int validTime;
    //1
//    userTime = scanTime();
//    validTime = IsTimeValid(userTime);
//    if (validTime)
//        printf("Time is valid\n");
//    else
//        printf("Time is not valid\n");

    //2
//    userTime = UpdateTime(userTime,65);
//    printTime(userTime);

    //3
    Contact contacts[5] = {
            {"Yossi", "Israeli" ,"0569532148", {"", 42, "Haifa"}},
            {"David","Levi", "0589756440",{"Gefen", 28, "Modiin"}},
            {"Ron", "Shai", "0526845324", {"Bergman", 16, "Jerusalem"}},
            {"Neta", "Chen", "0526459876", {"Dizengoff", 2, "Tel Aviv"}},
            {"Ron", "Yitzhak", "0542654125",{"Rehavia", 5, "Jerusalem"}}
    };
    PrintContactsArr(contacts, 5);
    PrintContactByFirstName(contacts, 5, "Ron");
    PrintContactInfo(contacts, 5, "Ron","Yitzhak");
    PrintContactsInCity (contacts, 5, "Jerusalem");
    return 0;
}
