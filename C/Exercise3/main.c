#include <stdio.h>

void print1_10()
{
    for (int i = 1; i<=10; i++){
        printf("%d\n", i);
    }
}

void print10_1()
{
    for (int i = 10; i>0; i--){
        printf("%d\n", i);
    }
}

void printEvenNums(){
    for (int i = 1; i<=10; i++){
        if (i%2==0){
            printf("%d\n", i);
        }
    }

    printf("----------------------------------------------------------------------\n");

    for (int i = 10; i>0; i--)
    {
        if (i%2==0) {
            printf("%d\n", i);
        }
    }
}

void printNumMultiples(){
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = 1; i<=10; i++) {
        printf("%d * %d = %d\n", num, i, i*num);
    }
}

void printNumDividers(){
    int num;

    printf("Enter a number:\n");

    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        if (num%i==0){
            printf("%d  ", i);
        }
    }
}

void MaxMinOfArr(){
    int numOfElements = 10;
    int num_arr[numOfElements];
    int maxNum;
    int minNum;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < numOfElements; i++)
    {
        scanf("%d", &num_arr[i]);

        if (i == 0 || num_arr[i] > maxNum){
            maxNum = num_arr[i];
        }
        if (i == 0 || num_arr[i] < minNum){
            minNum = num_arr[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", num_arr[i]);
    }

    printf("\nMax number: %d\n", maxNum);
    printf("\nMin number: %d\n", minNum);
}

void revertNum(){
    int userNum;
    int num;
    int reversed = 0;
    int remainNum;

    printf("Enter a number:\n");
    scanf("%d", &userNum);

    num = userNum;

    while (num != 0)
    {
        remainNum = num%10;
        reversed = reversed*10+remainNum;
        num /= 10;
    }
    printf("%d => %d", userNum, reversed);
}

void printABC(){
    for (char c = 'A'; c<='Z'; c++)
        printf("%c  ", c);
}

void calcNumAssembly(){
    int num;
    int result = 1;
    do
    {
        printf("Enter a positive number:\n");
        scanf("%d", &num);
        if (num<0)
            printf("Error\n");
    }
    while (num < 0);

    for (int i = num; i>0; i--)
    {
        result *= i;
        if (i>1)
            printf("%d*", i);
        else
            printf("%d ", i);
    }
    if(num == 0)
        printf("%d = !%d\n", 0, num);
    else
        printf ("= %d = !%d\n", result, num);
}

void strLen(){
    char str[30];
    int length = 0;

    printf("Enter a string:\n");
    scanf("%s", str);

    for(int i=0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("length = %d", length);
}

void numLen(){
    int num;
    int digitNum = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    while(num != 0)
    {
        digitNum++;
        num/=10;
    }
    printf("Digit = %d", digitNum);
}

void calcNumSum(){
    int num;
    int remainNum;
    int sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    while(num != 0)
    {
        remainNum = num%10;
        sum += remainNum;
        num/=10;
    }
    printf("Sum of digits: %d", sum);

}

void backwardsStr(){
    char str[30];
    int length = 0;

    printf("Enter a string:\n");
    scanf("%s", str);

    for(int i=0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
        length++;
    }

    printf("-->");

    for (int i = length-1; i>=0; i--)
        printf("%c", str[i]);
}

int main() {
    //print1_10();
    //print10_1();
    //printEvenNums();
    //printNumMultiples();
    //printNumDividers();
    //MaxMinOfArr();
    //revertNum();
    //printABC();
    //calcNumAssembly();
    //strLen();
    //numLen();
    //calcNumSum();
    backwardsStr();
    return 0;

}
