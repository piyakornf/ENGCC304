## โจทย์
เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

## FIX CODE
```c++
#include<stdio.h>

int main() {
    char employeeID [11];
    int workinghrs = 0;
    float Salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workinghrs);

    printf("Salary amount/hr:");
    scanf("%f", &Salary);
    
    printf("Expected Output:\n");
    printf("Employee ID: %s\n", employeeID);
    printf("Salary = U$ %.2f\n", Salary * workinghrs);
}
```

## TEST CASE 1
### Input
```bash
Input the Employees ID(Max. 10 chars): 
0342
Input the working hrs: 
8
Salary amount/hr: 
15000

```
### Output
```bash
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
```

## TEST CASE 2
### Input
```bash
Input the Employees ID(Max. 10 chars): 
0000500349
Input the working hrs: 
11
Salary amount/hr: 
34000

```
### Output
```bash
Expected Output:
Employees ID = 0000500349
Salary = U$ 374000.00
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
