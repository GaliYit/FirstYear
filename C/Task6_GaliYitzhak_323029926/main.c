#include <stdio.h>
#define STRING_SIZE 20

int strLen(char* string)
{
    int len = 0;
    for (string; *string != '\0'; string++)
    {
        len++;
    }
    return len;
}

int strCmp(char* string1, char* string2)
{
    int str1Len = strLen(string1);
    int str2Len = strLen(string2);
    if (str1Len > str2Len){
        return 1;
    }
    else if (str1Len < str2Len) {
        return -1;
    }

    for (string1, string2; *string1 != '\0' && *string2 != '\0'; string1++, string2++) {
        if (*string1 != *string2 && *string1 > *string2) {
            return 1;
        }
        else if (*string1 != *string2 && *string1 < *string2) {
            return -1;
        }
    }
    return 0;
}

void strCat (char* destination, char* source)
{
    int destLen = strLen(destination);
    int sourceLen = strLen(source);
    if (destLen + sourceLen > STRING_SIZE)
    {
        return;
    }
    for (char *p_dest = destination+destLen, *p_src=source; *p_src != '\0'; p_dest++, p_src++)
    {
        *p_dest = *p_src;
    }
}

void strCpy(char* string1, char* string2)
{
    for (string1, string2; *string2 != '\0'; string1++, string2++)
    {
        *string1 = *string2;
    }
    *string1++ = '\0';
}

int isPalindrome (char* str)
{
    int len = strLen(str);
    for (char *s_str = str, *e_str = str+len-1; s_str < str+len/2; s_str++, e_str--)
    {
        if (*s_str != *e_str)
        {
            return 0;
        }
    }
    return 1;
}

void revertCopy(char* str)
{
    int len = strLen(str);
    char temp;
    for (char *s_str = str, *e_str = str+len-1; s_str < str+len/2; s_str++, e_str--)
    {
        temp = *e_str;
        *e_str = *s_str;
        *s_str = temp;
    }
}

int main() {
    int userChoice;
    int areEqual;
    char string1[STRING_SIZE];
    char string2[STRING_SIZE];
    do {
        printf("Please enter your choice : \n"
               "1 - To calculate the length of string\n"
               "2 - To compare two strings\n"
               "3 - To concatenate two strings\n"
               "4 - To copy string to another\n"
               "5 - To check if string is palindrome\n"
               "6 - To copy reverse string to another\n"
               "0 - To exit\n");
        scanf("%d", &userChoice);
        switch (userChoice) {
            case 0:
                printf("GOOD BYE!\n");
                break;
            case 1:
                printf("Enter a word:\n");
                scanf(" %s", string1);
                printf("len = %d\n", strLen(string1));
                break;
            case 2:
                printf("Enter the first word:\n");
                scanf(" %s", string1);
                printf("Enter the second word:\n");
                scanf(" %s", string2);
                areEqual = strCmp(string1, string2);
                if (!areEqual)
                {
                    printf("Same word\n");
                }
                else
                {
                    printf("Different word\n");
                }
                break;
            case 3:
                printf("Enter the first word:\n");
                scanf(" %s", string1);
                printf("Enter the second word:\n");
                scanf(" %s", string2);
                strCat(string1, string2);
                printf("%s\n", string1);
                break;
            case 4:
                printf("Enter the first word:\n");
                scanf(" %s", string1);
                printf("Enter the second word:\n");
                scanf(" %s", string2);
                strCpy(string1, string2);
                printf("%s\n", string1);
                break;
            case 5:
                printf("Enter a word:\n");
                scanf(" %s", string1);
                if (isPalindrome(string1))
                {
                    printf("Palindrome\n");
                }
                else
                    printf("Not Palindrome\n");

                break;
            case 6:
                printf("Enter a word:\n");
                scanf(" %s", string1);
                revertCopy(string1);
                printf("%s\n", string1);
                break;
            default:
                printf("I don't understand, please enter a valid choice\n");
                break;

        }
    } while (userChoice != 0);
    return 0;
}
