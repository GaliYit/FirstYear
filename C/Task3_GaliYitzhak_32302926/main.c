#include <stdio.h>

void checkArrForDuplicates(){
    int arrSize = 10;
    int arr[arrSize];

    printf("Please enter %d numbers:\n", arrSize);
    for (int i=0; i<arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<arrSize; i++)
    {
        for (int j = 0; j<arrSize; j++)
        {
            if (arr[i]==arr[j] && i!=j)
            {
                printf("Duplicates values in the array\n");
                return;
            }
            else if (i==arrSize-1 && j==arrSize-1)
            {
                printf("No duplicates values in the array\n");
                return;
            }
        }
    }
}

void matrixMaxNumInRow(){
    int row = 4;
    int column = 3;
    int max;
    int matrix[row][column];

    printf("Please enter %d*%d matrix:\n", row, column);
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<row; i++) {
        for (int j = 0; j < column; j++) {
            if (j==0 || matrix[i][j]>max)
                max = matrix[i][j];
        }
        printf("Maximum line %d: %d\n", i+1, max);
    }
}

int isPrime(int num)
{
    for (int i=2; i<=num/2; i++)
    {
        if (num%i == 0)
        {
            return 1;
        }
    }
    return 0;
}

void primaryNums(){
    int posNum;

    printf("Please enter a positive integer:\n");

    do {
        scanf("%d", &posNum);
    }
    while(posNum<0);

    for (int i=1; i<=posNum;i++)
    {
        if (isPrime(i) == 0)
        {
            printf("%d ", i);
        }
    }
}

int main() {
    //323029926
    checkArrForDuplicates();
    matrixMaxNumInRow();
    primaryNums();
    return 0;
}
