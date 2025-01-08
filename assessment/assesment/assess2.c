#include <stdio.h>
#include <string.h>

 void revStr(char *str);
int substr(char *str1, char *str2);

int main() {
    char str1[40], str2[40], ch;
    int choice;

start:
    printf("\nMain Menu :-");
    printf("\n1. Reverse a string");
    printf("\n2. Concatenation");
    printf("\n3. Palindrome");
    printf("\n4. Copy a string");
    printf("\n5. Length of the string");
    printf("\n6. Frequency of character in a string");
    printf("\n7. Find number of vowels and consonants");
    printf("\n8. Find number of blank spaces and digits");
    printf("\n9. Exit");

    printf("\n\n\n-------Enter your choice:------- ");
    scanf("%d", &choice);

   


    switch (choice) {
        case 1:
            printf("\nEnter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            printf("\n\nOriginal value of str1: %s", str1);
            printf("\nOriginal value of str2: %s", str2);

            revStr(str1);
            printf("\nReversed str1: %s", str1);

            revStr(str2);
            printf("\nReversed str2: %s", str2);
            break;

        case 2:
            printf("\nEnter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            if (strlen(str1) + strlen(str2) < 40) { // Prevent buffer overflow
                printf("\n\nOriginal value of str1: %s", str1);
                printf("\nOriginal value of str2: %s", str2);

                strcat(str1, str2);

                printf("\nValue of string concatenation function: %s", str1);
            } else {
                printf("\nError: Concatenation would exceed buffer size.");
            }
            break;

        case 3: {
            printf("\nEnter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);

            char temp[40];
            printf("\n\nOriginal value of str1: %s", str1);
            printf("\nOriginal value of str2: %s", str2);

            strcpy(temp, str1);
            revStr(temp);
            if (strcmp(str1, temp) == 0) {
                printf("\n%s is a palindrome", str1);
            } else {
                printf("\n%s is not a palindrome", str1);
            }

            strcpy(temp, str2);
            revStr(temp);
            if (strcmp(str2, temp) == 0) {
                printf("\n%s is a palindrome", str2);
            } else {
                printf("\n%s is not a palindrome", str2);
            }
            break;
        }

        case 4:
            printf("\nEnter the first string: ");
            scanf("%s", str1);
            printf("\n\nOriginal value of str1: %s", str1);
            strcpy(str2, str1);
            printf("\nValue of string copy function: %s", str2);
            break;

        case 5:
            printf("\nEnter the first string: ");
            scanf("%s", str1);
            printf("\nLength of str1: %d", strlen(str1));
            break;

        case 6: {
            printf("\nEnter the first string: ");
            scanf("%s", str1);

            printf("\nEnter the character to find frequency: ");
            scanf(" %c", &ch);
            int count = 0;
            for (int i = 0; str1[i] != '\0'; i++) {
                if (str1[i] == ch)
                    count++;
            }
            printf("\nIn this string '%s' The Frequency of '%c' is str1 is :-  %d",str1, ch, count);
            break;
        }

        case 7: {
    printf("\nEnter the first string: ");
    scanf("%s", str1);

    int vowels = 0, consonants = 0;
    char vowelStr[100] = "", consonantStr[100] = "";
    int vIndex = 0, cIndex = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        char c = tolower(str1[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
            vowelStr[vIndex++] = str1[i]; // Add to vowels string
        } else if (c >= 'a' && c <= 'z') {
            consonants++;
            consonantStr[cIndex++] = str1[i]; // Add to consonants string
        }
    }

    // Null-terminate the strings
    vowelStr[vIndex] = '\0';
    consonantStr[cIndex] = '\0';

    printf("\nNumber of vowels in str1: %d", vowels);
    printf("\nVowels in str1: %s", vowelStr);

    printf("\nNumber of consonants in str1: %d", consonants);
    printf("\nRemaining consonant string: %s", consonantStr);

    break;
}
        case 8: {
            printf("\nEnter the first string: ");
            scanf("%s", str1);

            int spaces = 0, digits = 0;
            for (int i = 0; str1[i] != '\0'; i++) {
                if (str1[i] == ' ')
                    spaces++;
                else if (isdigit(str1[i]))
                    digits++;
            }
            printf("\nNumber of blank spaces in str1: %d", spaces);
            printf("\nNumber of digits in str1: %d", digits);
            break;
        }

        case 9:

            printf("\nExit");
            return 0;

        default:
            printf("\nInvalid choice!");
            break;
    }

    printf("\n\nDo you want to continue (y/n)? ");
    scanf(" %c", &ch);
    if (ch == 'y' || ch == 'Y') {
        goto start;
    } else {
        printf("\nProgram end");
    }

    return 0;
}

// Function to reverse a string
void revStr(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to check if one string is a substring of another
int substr(char *str1, char *str2) {
    if (strstr(str1, str2) != NULL) {
        return 1;
    }
    return 0;
}
