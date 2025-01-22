#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter A String Name:");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        }
    }
    printf("\nYour Enter A String Lenght Is:\t%d", count + 1);

    return 0;
}