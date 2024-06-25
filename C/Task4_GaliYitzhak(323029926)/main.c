#include <stdio.h>
#include <math.h>

//1
int CalcNumAssembly (int num)
{
    int assembly = 1;
    for (int i=num; i>0; i--)
    {
        assembly *= i;
    }
    return assembly;
}

//2
int CalcNumberLength (int num)
{
    int digitInNum = 0;
    while (num>0)
    {
        digitInNum ++;
        num /= 10;
    }
    return digitInNum;
}

//3
int IsNumStrong (int num)
{
    int assemblySum = 0;
    int remainNum = num;
    int temp;
    while (remainNum>0)
    {
        temp = remainNum%10;
        assemblySum += CalcNumAssembly(temp);
        remainNum /= 10;
    }
    if (assemblySum == num)
        return 1;
    else
        return 0;
}

//4
int IsNumArmstrong (int num)
{
    int numOfDigits = CalcNumberLength(num);
    int powerSum = 0;
    int remainNum = num;
    for (int i = 0, temp; i<numOfDigits; i++)
    {
        temp = remainNum%10;
        powerSum += pow(temp,numOfDigits);
        remainNum /=10;
    }
    if (powerSum == num)
        return 1;
    else
        return 0;
}

//5
void ActivateStrongExercise()
{
    int userNum;

    printf("Enter a number:\n");
    scanf("%d", &userNum);
    int isStrong = IsNumStrong(userNum);
    if (isStrong)
        printf("The number %d is STRONG", userNum);
    else
        printf("The number %d is NOT STRONG", userNum);
}

void ActivateArmstrongExercise()
{
    int userNum;

    printf("Enter a number:\n");
    scanf("%d", &userNum);
    int isArmstrong = IsNumArmstrong(userNum);
    if (isArmstrong)
        printf("The number %d is ARMSTRONG", userNum);
    else
        printf("The number %d is NOT ARMSTRONG", userNum);
}

int main() {
    //323029926
    int userChoice;

    printf("Which exercise do you want to execute?\n"
           "1 - Check Strong number\n"
           "2 - Check Armstrong number\n"
           "0 - To exit\n");
    scanf("%d", &userChoice);
    switch (userChoice)
    {
        case 0:
            printf("GOOD BYE!");
            break;
        case 1:
            ActivateStrongExercise();
            break;
        case 2:
            ActivateArmstrongExercise();
            break;
    }

    return 0;
}
