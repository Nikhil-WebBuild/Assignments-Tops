//Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100], s3[200];
    printf("Enter Your First String Name:\t");
    gets(s1);
    printf("Enter Your Second String Name:\t");
    gets(s2);

    strcat(s1, s2);
    printf("\nThe String After Using strcat() is : %s ",s1);

    int len = strlen(s1);
    printf("\nThe Length Of strcat() String is  %d ",len);
    return 0;
}