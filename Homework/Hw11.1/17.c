#include <stdio.h>

// ฟังก์ชันคำนวณเลขยกกำลัง (base^exp)
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;  // คูณ base ซ้ำ exp ครั้ง
    }
    return result;
}

// ฟังก์ชันตรวจสอบว่าเป็น Armstrong number หรือไม่
int isArmstrong(int n) {
    if (n < 0) return 0;  // ถ้าเป็นเลขติดลบ => ไม่ใช่

    int digits = 0;   // นับจำนวนหลัก
    int temp = n;

    // นับจำนวนหลัก
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    int sum = 0;
    temp = n;

    // หาผลรวมของ (แต่ละหลัก^จำนวนหลัก)
    do {
        int d = temp % 10;        // เอาหลักสุดท้าย
        sum += power(d, digits);  // ยกกำลังแล้วบวกเข้ากับ sum
        temp /= 10;               // ตัดหลักสุดท้ายทิ้ง
    } while (temp != 0);

    return sum == n;  // ถ้า sum เท่ากับ n → เป็น Armstrong
}

int main() {
    int n;

    printf("Enter Number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 0;
    }

    if (isArmstrong(n))
        printf("Pass.\n");     // เป็น Armstrong number
    else
        printf("Not Pass.\n"); // ไม่ใช่ Armstrong number

    return 0;
}
