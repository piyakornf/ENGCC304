#include <stdio.h>

int main()
{
    int score = 0;
    printf("Please enter your score: ");
    scanf("%d", &score);
    printf("Grade: ");
    if (score >= 80)
    {
        printf("A\n");
    }
    else if (score >= 70 && score < 80)
    {
        printf("B\n");
    }
    else if (score >= 60 && score < 70)
    {
        printf("C\n");
    }
    else if (score >= 50 && score < 60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    return 0;
}