## โจทย์

จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้ โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass


## FIX CODE
```c++
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, j, isPalindrome = 1;

    printf("Enter word: ");
    scanf(" %s", word);

    // แปลงตัวอักษร A-Z ให้เป็น a-z ด้วยการบวก 32
    for (i = 0; word[i]; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;  
        }
    }

    i = 0;
    j = strlen(word) - 1;

    while (i < j) {
        // ข้ามช่องว่าง
        if (word[i] == ' ') { i++; continue; }
        if (word[j] == ' ') { j--; continue; }

        // ถ้าไม่ตรงกัน => ไม่ใช่ palindrome
        if (word[i] != word[j]) {
            isPalindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}


```

## TEST CASE
### Input
```bash
Enter word:
radar
```
### Output
```bash
Pass.
```

## TEST CASE
### Input
```bash
Enter word:
hello
```
### Output
```bash
Not Pass.
```

## TEST CASE
### Input
```bash
Enter word:
Radar
```
### Output
```bash
Pass.
```

## TEST CASE
### Input
```bash
Enter word:
here
```
### Output
```bash
Not Pass.
```

## มาตรฐานการตรวจตามหลักการเรียนรู้ของบลูม
| ลำดับการเรียนรู้ | เกณฑ์การวัด | คะแนน |
| -------- | -------- | -------- |
| รู้จำ | เห็นโครงสร้างของโค้ดโปรแกรมชัดเจน ได้มาตรฐาน | 1 pts |
| เข้าใจ | แก้ไขปัญหาได้ตามที่โจทย์กำหนด | 1 pts |
| ประยุกต์ใช้ | สามารถผ่านเงื่อนไขได้ทุก testcase | 1 pts |
| วิเคราะห์ | หาจุดผิดของโปรแกรมได้ | 1 pts |
| ประเมินค่า | โปรแกรมเสร็จสมบูรณ์ระยะเวลาที่กำหนด | 1 pts |
| สร้างสรรค์ | แก้ไขสถานการณ์ของโจทย์ | 1 pts |
||<p style='text-align: right !important;'>**รวม**</p>|**6 pts**|
