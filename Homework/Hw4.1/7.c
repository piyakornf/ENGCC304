#include<stdio.h>

int main() {
    int d,s;

    printf("Input Days : ");
    scanf("%d", &d);

    printf("%d days = %d seconds",d,s = d*86400);
}