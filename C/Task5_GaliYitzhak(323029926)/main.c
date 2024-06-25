#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[20];
    char courses[5][20];
    int grades[5];
    int numOfCourses;
    int numOfGrades;
}Student;

float CalcStudentAverageGrade(Student _student) {
    int sum = 0;
    for (int i = 0; i < _student.numOfGrades; ++i) {
        sum+=_student.grades[i];
    }
    return (float)sum/(float)_student.numOfGrades;
}

int findStudent(Student _studentsArr[], int _studentAmount, char _studentName[20]) {
    for (int i = 0; i<_studentAmount; i++)
    {
        if (!strcmp(_studentsArr[i].name, _studentName))
        {
            return i;
        }
    }
    return -1;
}

void PrintStudent(Student _student) {
    printf("%s\n", _student.name);
    if (_student.numOfGrades > 0) {
        printf("-------Grades-------\n");
        for (int i = 0; i < _student.numOfGrades; i++) {
            printf("%s : %d\n", _student.courses[i], _student.grades[i]);
        }

        printf("-------Average------\n %f\n\n", CalcStudentAverageGrade(_student));
    } else {
        printf("No grades for now\n\n");
    }
}

void PrintStudentsArr(Student _studentsArr[], int _studentAmount) {
       for(int i=0; i<_studentAmount;i++)
       {
           printf("Student %d : ", i+1);
           PrintStudent(_studentsArr[i]);
       }
}

int CourseExists (Student _student, char _course[])
{
    for (int i=0; i<_student.numOfCourses; i++)
    {
        if (!strcmp(_student.courses[i], _course))
        {
            return i;
        }
    }
    return -1;
}


void AddCourseToStudentArr(Student _studentsArr[], int _studentAmount, char _studentName[], char _course[]) {

    int studentIndex = findStudent(_studentsArr,_studentAmount, _studentName);
    if (studentIndex == -1)
    {
        printf("This student does not exists\n");
    }
    else if (_studentsArr[studentIndex].numOfCourses==5)
    {
        printf("Course not added : student can learn 5 courses/semester maximum\n");
    }
    else if(CourseExists(_studentsArr[studentIndex],_course) != -1){
        printf("This course already exists\n");
    }
    else{
        strcpy(_studentsArr[studentIndex].courses[_studentsArr[studentIndex].numOfCourses], _course);
        _studentsArr[studentIndex].numOfCourses++;
        printf("Course added\n");
    }
}

int ValidGrade(int _grade)
{
    if (_grade<0 || _grade>100)
    {
        return 0;
    }
    return 1;
}

void AddGradeToStudentArr(Student _studentsArr[], int _studentAmount, char _studentName[], char _course[], int _grade) {
    int studentIndex = findStudent(_studentsArr,_studentAmount, _studentName);
    int courseIndex = CourseExists(_studentsArr[studentIndex], _course);
    if (studentIndex == -1)
    {
        printf("This student does not exists\n");
    }
    else if (courseIndex == -1)
    {
        printf("This course does not exists - You need to add the course before\n");
    }
    else if (!ValidGrade(_grade))
    {
        printf("Grade must be between 0-100\n");
    }
    else{
        if (_studentsArr[studentIndex].grades[courseIndex] == -1)
        {
            _studentsArr[studentIndex].numOfGrades++;
        }
        _studentsArr[studentIndex].grades[courseIndex] = _grade;
        printf("Grade added\n");
    }
}

int AddStudentToArr(Student _studentsArr[], int _arrSize, int _studentAmount, char _studentName[]){
    if (_studentAmount>=_arrSize)
    {
        printf("Cannot add more students\n");
        return 0;
    }
    else if(findStudent(_studentsArr, _studentAmount, _studentName) != -1)
    {
        printf("This student is already exist\n");
        return 0;
    }
    else {
        strcpy(_studentsArr[_studentAmount].name, _studentName);
        _studentsArr[_studentAmount].numOfCourses = 0;
        _studentsArr[_studentAmount].numOfGrades = 0;
        for (int i=0; i<5; i++)
        {
            _studentsArr[_studentAmount].grades[i] = -1;
        }
        printf("Student added\n");
        return 1;
    }
}

int main() {
    int userInput=-1;
    char studentName[20];
    int arrSize = 5;
    Student studentArr[arrSize];
    int studentsNum = 0;
    char courseName[20];
    int grade;
    do{
        printf("What do you want to do?\n"
               "0 - Exit\n"
               "1 - Add Student\n"
               "2 - Add Course to a student\n"
               "3 - Add grade to a student\n"
               "4 - Print students details\n");
        scanf("%d", &userInput);
        switch(userInput)
        {
            case 0:
                printf("GOOD BYE!\n");
                break;
            case 1:
                printf("Please enter the new student name:\n");
                scanf(" %s", studentName);
                studentsNum+=AddStudentToArr(studentArr,arrSize,studentsNum,studentName);
                break;
            case 2:
                printf("Please enter the student name:\n");
                scanf(" %s", studentName);
                printf("Please enter the new course name:\n");
                scanf(" %s", courseName);
                AddCourseToStudentArr(studentArr,studentsNum,studentName, courseName);
                break;
            case 3:
                printf("Please enter the student name:\n");
                scanf(" %s", studentName);
                printf("Please enter the course name:\n");
                scanf(" %s", courseName);
                printf("Please enter the new grade:\n");
                scanf("%d", &grade);
                AddGradeToStudentArr(studentArr,studentsNum,studentName,courseName,grade);
                break;
            case 4:
                PrintStudentsArr(studentArr, studentsNum);
                break;
            default:
                printf("I don't understand, please enter a valid choice\n\n");
                break;
        }
    }
    while (userInput != 0);

    return 0;
}
