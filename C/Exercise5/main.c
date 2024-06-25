#include <stdio.h>
#include <string.h>

int BiggestDigitInNum(int num)
{
    int bigDigit = 0;
    int tempDigit;
    while (num > 0)
    {
        tempDigit = num%10;
        num/=10;

        // another way to do it - bigDigit = (bigDigit<tempDigit) ? tempDigit : bigDigit;
        if (bigDigit<tempDigit)
        {
            bigDigit = tempDigit;
        }
    }
    return bigDigit;
}

int numDividers(int num)
{
    int dividersNum = 1; //Including the given num
    for (int i = 1; i< num/2; i++)
    {
        if (num % i == 0)
        {
            dividersNum += 1;
        }
    }
    return dividersNum;
}

int arrBiggestVal(int arr[], int arrSize)
{
    int bigVal = arr[0];
    for (int i=1; i<arrSize; i++) {

        if (arr[i] > bigVal)
            bigVal = arr[i];

    }
    return bigVal;
}

int letterInWord (char str[], char letter)
{
    int letterAppearance = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letter)
        {
            letterAppearance++;
        }
    }
    return letterAppearance;
}


int main() {
    int userNum;
    int userArr[] ={};
    int arrSize;
    char letter;
    char str[] = "";

    //1
    /*printf("Please enter a number:\n");
    scanf("%d", &userNum);
    printf ("Biggest digit in number is: %d\n", BiggestDigitInNum(userNum));*/

    //2
    /*printf("Please enter a number:\n");
    scanf("%d", &userNum);
    printf ("The number of dividers is: %d\n", numDividers(userNum));*/

    //3
//    printf("Please enter an array size:\n");
//    scanf("%d", &arrSize);
//    printf("Please enter an array of numbers:\n");
//    for (int i=0;i<arrSize; i++)
//    {
//        scanf("%d", &userArr[i]);
//    }
//    printf("The biggest number in array is: %d", arrBiggestVal(userArr, arrSize));

    //4
//    printf("Please enter a word:\n");
//    scanf(" %c", str);
//    printf("Please enter a letter:\n");
//    scanf(" %c", &letter);
//    printf("The number of time %c appears in word is: %d", letter, letterInWord(str, letter));

    char strArr[]={};



    return 0;
}
