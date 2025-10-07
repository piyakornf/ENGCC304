#include <stdio.h>

int main() {
    int N = -1;  
    
    printf("Enter value: ");
    scanf("%d", &N);

    if (N < 0){
        printf("Please enter a number \n");
        return 0;
    }
    printf("Series: %d\n", N);

    if (N % 2 == 1) {
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
