#include <stdio.h>

int main() {
    const int MAXN = 100;      // จำกัดจำนวนสูงสุด (กันอินพุตยาวเกิน)
    int a[MAXN];
    int n = 0;

    char line[1024];           // บัฟเฟอร์เก็บบรรทัดอินพุต
    printf("Enter value:\n");

    // อ่านทั้งบรรทัด (รวมช่องว่าง) แล้วแปลงเป็นจำนวนเต็มทีละตัว
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *p = line;
        int val, consumed;

        // ดึงตัวเลขต่อเนื่องด้วย sscanf จนหมดบรรทัดหรือเต็ม MAXN
        while (n < MAXN && sscanf(p, "%d%n", &val, &consumed) == 1) {
            a[n++] = val;
            p += consumed;     // ขยับตัวชี้ตามจำนวนตัวอักษรที่อ่านไป
        }
    }

    if (n == 0) {
        // กรณีไม่มีตัวเลขให้ทำอะไรต่อ แสดงผลว่าง ๆ หรือจบโปรแกรม
        printf("Index:\n");
        printf("Array:\n\n");
        printf("Min : \n");
        printf("Max : \n");
        return 0;
    }

    // หา Min และ Max
    int mn = a[0], mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }

    // พิมพ์ Index
    printf("Index:");
    for (int i = 0; i < n; i++) {
        printf(" %d", i);
    }
    printf("\n");

    // พิมพ์ Array
    printf("Array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n\n");

    // พิมพ์ Min / Max (รูปแบบให้เหมือน Test case: มีช่องว่างก่อน :)
    printf("Min : %d\n", mn);
    printf("Max : %d\n", mx);

    return 0;
}
