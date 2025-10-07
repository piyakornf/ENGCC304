#include <stdio.h>

int main(void) {
    float h, w;

    printf("Enter H = ");
    scanf("%f", &h);

    printf("Enter W = ");
    scanf("%f", &w);

    printf("%.1f\n", (h * w) / 2);
    return 0;
}
