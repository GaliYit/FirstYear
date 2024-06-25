#include <stdio.h>

int main() {
// 1
//    float ticketPrice;
//    int ticketAmount;
//    float ticketsCost;
//    printf("Dear User\nPlease enter the price of cinema ticket\n");
//    scanf("%f" ,&ticketPrice);
//    printf("Please enter how many tickets you want to buy:\n");
//    scanf("%d", &ticketAmount);
//    ticketsCost = ticketPrice*ticketAmount;
//    printf("You have to pay : %d sh.", ticketsCost);


//2
//    float ticketPrice;
//    float budget;
//    int ticketNum;
//    float leftMoney;
//    printf("Dear User\nPlease enter the price of cinema ticket:\n");
//    scanf("%f" ,&ticketPrice);
//    printf("Please enter how much money you have:\n");
//    scanf("%f", &budget);
//    ticketNum = budget/ticketPrice;
//    leftMoney = budget-(ticketNum*ticketPrice);
//    printf("You can buy: %d tickets\n"
//           "Money left: %f sh.\n", ticketNum, leftMoney);


//3
//    int bubbleGumPrice = 1;
//    int candyPrice = 2;
//    int bubbleGumAmount;
//    int candyAmount;
//    int budget = 20;
//    int change;
//    int totalPrice;
//    printf("Dear User\nPlease enter the amount of candy and the amount of bubble gum you would like to purchase:\n");
//    scanf("%d" ,&candyAmount);
//    scanf("%d" ,&bubbleGumAmount);
//    totalPrice = candyAmount*candyPrice+bubbleGumAmount*bubbleGumPrice;
//    change = budget-totalPrice;
//    printf("It is a total of: %d sh.\n"
//           "Excess of money from %d sh. is: %d sh.\n", totalPrice, budget, change);


//4
//    int cookiesNum;
//    int childrenNum;
//    int cookiesPerChild;
//    int cookiesLeft;
//    printf("Enter a number of cookies and a number of children:\n");
//    scanf("%d", &cookiesNum);
//    scanf("%d", &childrenNum);
//    cookiesPerChild = cookiesNum/childrenNum;
//    cookiesLeft = cookiesNum-(cookiesPerChild*childrenNum);
//    printf("Each child will get %d cookies\n"
//           "Numbers of cookies left is: %d\n", cookiesPerChild, cookiesLeft);


//5
//    double notebookPrice = 8.90;
//    double pencilPrice = 3.50;
//    int notebookAmount;
//    int pencilAmount;
//    double totalPrice;
//    printf("Notebook Price = %f\n Pencil Price = %f\n\nPlease enter the amount of notebooks and the amount of pencils you would like to purchase:\n", notebookPrice,pencilPrice);
//    scanf("%d", &notebookAmount);
//    scanf("%d", &pencilAmount);
//    totalPrice = notebookPrice*notebookAmount+pencilPrice*pencilAmount;
//    printf("Total Price of: %f sh.",totalPrice);


//6
//    float mathGrade;
//    float englishGrade;
//    float programingGrade;
//    int amountOfCourses = 3;
//    float average;
//    printf("Please Enter your math course grade:\n");
//    scanf("%f", &mathGrade);
//    printf("Please Enter your english course grade:\n");
//    scanf("%f", &englishGrade);
//    printf("Please Enter your programing course grade:\n");
//    scanf("%f", &programingGrade);
//    average = (mathGrade+englishGrade+programingGrade)/(float)amountOfCourses; //is there a way to convert to float the entire calculation?
//    printf("Your courses average is: %f", average);


//7
//    int pickedAvocados;
//    int rottenAvocados;
//    int totalGoodAvocados;
//    int avocadosInBox = 30;
//    int avocadosLeft;
//    int boxesNum;
//
//    printf("Please enter the total number of avocados the students picked:\n");
//    scanf("%d",&pickedAvocados);
//    printf("Please enter the total number of rotten avocados from the avocados picked:\n");
//    scanf("%d",&rottenAvocados);
//    totalGoodAvocados = pickedAvocados-rottenAvocados;
//    boxesNum = totalGoodAvocados/avocadosInBox;
//    avocadosLeft = totalGoodAvocados-(boxesNum*avocadosInBox);
//    printf("there is a total of %d boxes containing %d avocados each\n"
//           "Number of avocados left (not in a box) is: %d avocados\n", boxesNum,avocadosInBox,avocadosLeft);
//    return 0;


//8
    int numOfStudents;
    int studentsInReserveDuty;
    int studentInClass;
    int studentsPerGroup;
    int leftStudents;
    int groups = 6;

    printf("Please enter the Amount of students:\n");
    scanf("%d",&numOfStudents);
    printf("Please enter the amount of students in reserve duty:\n");
    scanf("%d",&studentsInReserveDuty);
    studentInClass = numOfStudents-studentsInReserveDuty;
    studentsPerGroup = studentInClass/groups;
    leftStudents = studentInClass-(studentsPerGroup*groups);
    printf("In each learning group there is %d students\n", studentInClass/groups);
    if (leftStudents != 0)
        printf("And one group of %d students\n", leftStudents);
    return 0;
}
