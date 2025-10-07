#include <stdio.h>

int main(void) {
    int n;

    printf("User Input :");
    scanf("%d", &n);

    if (n < 0 || n > 30) {
        printf("Out of range\n");
        return 0;
    }

    switch (n) {
        case 0:  printf("Zero\n"); break;
        case 1:  printf("One\n"); break;
        case 2:  printf("Two\n"); break;
        case 3:  printf("Three\n"); break;
        case 4:  printf("Four\n"); break;
        case 5:  printf("Five\n"); break;
        case 6:  printf("Six\n"); break;
        case 7:  printf("Seven\n"); break;
        case 8:  printf("Eight\n"); break;
        case 9:  printf("Nine\n"); break;
        case 10: printf("Ten\n"); break;
        case 11: printf("Eleven\n"); break;
        case 12: printf("Twelve\n"); break;
        case 13: printf("Thirteen\n"); break;
        case 14: printf("Fourteen\n"); break;
        case 15: printf("Fifteen\n"); break;
        case 16: printf("Sixteen\n"); break;
        case 17: printf("Seventeen\n"); break;
        case 18: printf("Eighteen\n"); break;
        case 19: printf("Nineteen\n"); break;
        case 20: printf("Twenty\n"); break;
        case 30: printf("Thirty\n"); break;

        // 21..29
        default:
            printf("Twenty ");
            switch (n % 10) {
                case 1: printf("One\n"); break;
                case 2: printf("Two\n"); break;
                case 3: printf("Three\n"); break;
                case 4: printf("Four\n"); break;
                case 5: printf("Five\n"); break;
                case 6: printf("Six\n"); break;
                case 7: printf("Seven\n"); break;
                case 8: printf("Eight\n"); break;
                case 9: printf("Nine\n"); break;
            }
    }
    return 0;
}
