#include <stdio.h>

void printStars(){
    int num;
    printf("Please enter a number:\n");
    scanf("%d", &num);
    for (int r=0; r<num;r++)
    {
        for (int c=0; c<num; c++)
            printf("*");
        printf("\n");
    }
}

void printNumSqur(){
    int num;
    printf("Please enter a number:\n");
    scanf("%d", &num);
    for (int r=1; r<=num;r++)
    {
        for (int c=1; c<=num; c++)
            printf("%d", c);
        printf("\n");
    }
}

void printPattern(){
    int num;

    do{
        printf("Please enter a number > 3:\n");
        scanf("%d", &num);
    }
    while(num <=3);

    for (int r=0; r<num;r++)
    {
        for (int c=0; c<num; c++)
        {
            if (r==0||r==num-1||c==0||c==num-1)
            {
                printf("o");
            }
            else
            {
                printf("+");
            }
        }



        printf("\n");
    }
}

void printNumPyramid(){
    int num;

    printf("Please enter a number:\n");
    scanf("%d", &num);

    if (num>9||num<1)
        printf("ERROR");
    else
    {
        for (int r=1; r<=num; r++)
        {
            for (int c=1; c<=r; c++)
            {
                printf("%d", c);
            }
            printf("\n");
        }
    }
}

void printSameNumPyramid(){
    int num;

    printf("Please enter a number:\n");
    scanf("%d", &num);

    if (num>9||num<1)
        printf("ERROR");
    else
    {
        for (int r=1; r<=num; r++)
        {
            for (int c=1; c<=r; c++)
            {
                printf("%d", r);
            }
            printf("\n");
        }
    }
}

void matrixSum(){
    int matrix1[4][4];
    int matrix2[4][4];
    int sumMatrix[4][4];

    printf("Please enter the first 4*4 matrix:\n");
    for (int i = 0; i<4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Please enter the second 4*4 matrix:\n");
    for (int i = 0; i<4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<4; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d", sumMatrix[i][j]);
        }
        printf("\n");
    }
}

void arrDiagonalSum() {
    int row = 4;
    int column = 4;
    int arr[row][column];
    int firstDiagonalSum = 0;
    int secondDiagonalSum = 0;

    printf("Please enter an 4*4 arr:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {

        for (int j = 0, last = row - 1; j < column; j++) {
            if (i == j)
                firstDiagonalSum += arr[i][j];
            else if (j == last-i)
                secondDiagonalSum += arr[i][j];
        }
    }

    printf("first diagonal: %d\n", firstDiagonalSum);
    printf("second diagonal: %d\n", secondDiagonalSum);
}

int main() {
    //printStars();
    //printNumSqur();
    //printPattern();
    //printNumPyramid();
    //printSameNumPyramid();
    //matrixSum();
    arrDiagonalSum();
    return 0;
}
