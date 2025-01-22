
#include <stdio.h>
#include <string.h>
void reverse(char c[]);
int main()
{
    char str1[100];
    printf("------>  Display The Reverse String Using Inbuilt Function....!\n");
    printf("Enter The First String Name:\t");
    gets(str1);

    strrev(str1);
    printf("Reversed String Is:\t%s\n",str1);

    printf("--------------------------------------------------------------------\n");
    printf("------>  Display The Reverse String Without Using Inbuilt Function....!\n");
    char s[100];
    printf("Enter Your String Name:\t");
    gets(s);

    reverse(s);
    return 0;
}

void reverse(char c[])
{
    int i, len = 0, j = 0;
    char s[100];
    for (i = 0; c[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        s[j] = c[i];
        j++;
    }

    printf("Reverse String Is:\t");
    for (i = 0; c[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
}
