#include <stdio.h>


void checkIfStringsTheSame()
{
    char string1[20], string2[20];

    printf("Please enter the first string:\n");
    scanf("%s", string1);
    printf("Please enter the second string:\n");
    scanf("%s", string2);

    for (int i=0; i<20;i++)
    {
        if (string1[i] != string2[i]) {
            printf("Different\n");
            break;
        }
        if (string1[i]=='\0'&&string2[i]=='\0') {
            printf("Same\n");
            break;
        }
    }
}

void checkIfPalindromeNum()
{
    int userNum;
    int num;
    int reversedNum;
    int remainNum;

    printf("Please enter a number:\n");
    scanf("%d", &userNum);

    num = userNum;
    while (num != 0) {
        remainNum = num % 10;
        reversedNum = reversedNum * 10 + remainNum;
        num /= 10;
    }

    if (userNum==reversedNum)
        printf ("PALINDROME NUMBER");
    else
        printf ("NOT PALINDROME NUMBER");
}

void checkIfPalindromeStr()
{
    char string[20];
    int length=0;
    int size;

    printf("Please enter a string:\n");
    scanf("%s", string);

    for (int i=0; string[i]!='\0'; i++)
    {
        length++;
    }
    size = length-1;
    for (int i=0; i<length/2; i++)
    {
        if (string[i] == string[size])
            size--;
        else
        {
            printf ("NOT PALINDROME STRING");
            break;
        }
    }
    if (size==length/2)
        printf ("PALINDROME STRING");
}

int main() {
    //323029926
    checkIfStringsTheSame();
    checkIfPalindromeNum();
    checkIfPalindromeStr();
    return 0;
}

