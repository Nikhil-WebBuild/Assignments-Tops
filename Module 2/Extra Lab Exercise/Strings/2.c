#include <stdio.h>
int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, speicalchar = 0;

    printf("Enter A String Name:\t");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            speicalchar++;
        }
    }
    printf("\n%d Is An Vowels.", vowels);
    printf("\n%d Is An Consonants.", consonants);
    printf("\n%d Is An Digits.", digits);
    printf("\n%d Is An Speical Characters.", speicalchar);

    return 0;
}