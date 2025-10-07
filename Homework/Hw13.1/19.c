#include <stdio.h>

// ฟังก์ชันสำหรับสลับค่า โดยใช้ Pointer
void swapNumbers(int *a, int *b) {
    int temp = *a;  // เก็บค่าของ *a ไว้ชั่วคราว
    *a = *b;        // เอาค่า *b มาใส่ใน *a
    *b = temp;      // เอาค่าเดิมของ *a (ที่อยู่ใน temp) มาใส่ใน *b
}

int main() {
    int num1, num2;   // ตัวแปรเก็บจำนวนเต็ม
    int *ptr1, *ptr2; // ตัวชี้ (Pointer)

    // รับค่าจากผู้ใช้
    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    // ให้ pointer ชี้ไปยังตัวแปร num1 และ num2
    ptr1 = &num1;
    ptr2 = &num2;

    // แสดงค่าก่อนสลับ
    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);

    // เรียกฟังก์ชัน swapNumbers
    swapNumbers(ptr1, ptr2);

    // แสดงค่าหลังสลับ
    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);

    return 0;
}
