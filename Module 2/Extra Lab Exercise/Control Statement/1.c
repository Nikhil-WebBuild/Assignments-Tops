#include <stdio.h>
int main()
{
    int mark;

    printf("Enter The Stduent Marks Of Subject:\t");
    scanf("%d", &mark);

    printf("------------");
    printf("\nDispaly The Corresponding Grade Bsed On Marks:");
    if (mark >= 90)
    {
        printf("\n%d : Grade A",mark);
    }
    else if (mark > 75 && mark <= 90)
    {
        printf("\n%d : Grade B",mark);
    }
    else if (mark > 50 && mark <= 75)
    {
        printf("\n%d : Grade C",mark);
    }
    else if (mark <= 50)
    {
        printf("\n%d : Grade D",mark);
    }
    else
    {
        printf("\nInvalid Marks...!");
    }
    

    return 0;
}