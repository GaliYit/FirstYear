#include <stdio.h>

int main() {
    int num;

    //1
    printf("Please enter a number:\n");
    scanf("%d", &num);
    if (num%2 ==0)
        printf("Even\n");
    else
        printf("Odd\n");

    //2
    /*float x;
    float y;
    printf("Please enter 2 numbers X and Y:\n");
    for(int i = 0; i<10;i++)
    {
        scanf("%f", &x);
        scanf("%f", &y);
        if (x>0 && y>0)
            printf("The coordinate point (%f,%f) lies in the first quadrant.\n", x,y);
        else if (x<0 && y>0)
            printf("The coordinate point (%f,%f) lies in the second quadrant.\n", x,y);
        else if (x<0 && y<0)
            printf("The coordinate point (%f,%f) lies in the third quadrant.\n", x,y);
        else if (x>0 && y<0)
            printf("The coordinate point (%f,%f) lies in the forth quadrant.\n", x,y);
        else
        {
            if (x==0 && y>0)
                printf("The coordinate point (%f,%f) lies on the positive side of axis y.\n", x,y);
            else if (x==0 && y<0)
                printf("The coordinate point (%f,%f) lies on the negative side of axis y.\n", x,y);
            else if (x>0 && y==0)
                printf("The coordinate point (%f,%f) lies on the positive side of axis x.\n", x,y);
            else if (x<0 && y==0)
                printf("The coordinate point (%f,%f) lies on the negative side of axis x.\n", x,y);
            else
                printf("The coordinate point (%f,%f) lies on the origin.\n", x,y);
        }
    }*/

    //3
    /*float temp;
    printf("Please enter the temperature:\n");
    for(int i = 0; i<6;i++)
    {
        scanf("%f", &temp);
        if (temp<0)
            printf("Freezing weather\n");
        else if (0<temp && temp<10)
            printf("Very Cold weather\n");
        else if (10<temp && temp<20)
            printf("Cold weather\n");
        else if (20<temp && temp<30)
            printf("Normal in Temp\n");
        else if (20<temp && temp<40)
            printf("Hot\n");
        else
            printf("Very Hot\n");
    }*/

    //4
    /*char student1[50];
    char student2[50];
    char student3[50];
    float grade1;
    float grade2;
    float grade3;

    printf("Please enter the names of 3 students:\n");
    scanf("%s",student1);
    scanf("%s",student2);
    scanf("%s",student3);
    printf("Please enter their grades:\n");
    scanf("%f",&grade1);
    scanf("%f",&grade2);
    scanf("%f",&grade3);
    if (grade1>grade2 && grade1>grade3)
        printf ("%s has the best grade.", student1);
    else if (grade2>grade1 && grade2>grade3)
        printf ("%s has the best grade.", student2);
    else if (grade3>grade1 && grade3>grade2)
        printf ("%s has the best grade.", student3);
    else
    {
        if (grade1==grade2)
            printf ("There is a tie between %s and %s for the best grade.", student1, student2);
        else if (grade1==grade3)
            printf ("There is a tie between %s and %s for the best grade.", student1, student3);
        else
            printf ("There is a tie between %s and %s for the best grade.", student2, student3);
    }*/

    //5
    /*printf("Please Enter a month number (between 1-12):\n");
    for (int i = 0; i<13; i++) {
        scanf("%d", &num);
        switch (num) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("31\n");
                break;
            case 2:
                printf("28\n");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("30\n");
                break;
            default:
                printf("Wrong month :(\n");
                break;
        }
    }*/

    //6
    /*printf("Please Enter a day number (between 1-7):\n");
    for (int i = 0; i<8; i++) {
        scanf("%d", &num);
        switch (num) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("Wrong day :(\n");
                break;
        }
    }*/
    return 0;
}
