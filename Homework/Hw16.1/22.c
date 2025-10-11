#include <stdio.h>

int main(void) {
    int a[7] = {15, 7, 25, 3, 73, 32, 45};
    int n = 7;                 
    int i, j;

    // Old Series
    printf("Old Series : ");
    for (i = 0; i < n; i++) {
        if (i) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");

    // Bubble sort จากน้อยไปมาก
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    // New Series
    printf("New Series : ");
    for (i = 0; i < n; i++) {
        if (i) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");

    // ค้นหาตำแหน่งของ 32 (index เริ่มที่ 0 ตาม Test Case)
    int pos = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == 32) { pos = i; break; }
    }
    printf("Pos of 32 : %d\n", pos);

    return 0;
}

