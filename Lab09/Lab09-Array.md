## โจทย์
จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

## FIX CODE
```c++

#include <stdio.h>

int main() {
    int n;
    int arr[100];   
    int i, j;

    printf("Enter N : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:");
    for (i = 0; i < n; i++) {
        printf(" %d", i);
    }
    printf("\n");

    printf("Array:");
    for (i = 0; i < n; i++) {
        if (arr[i] < 2) {
            printf(" #");   
        } else {
            for (j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    break;  
                }
            }
            if (j * j > arr[i]) {
                printf(" %d", arr[i]);  
            } else {
                printf(" #");         
            }
        }
    }
    printf("\n");

    return 0;
}

```

## TEST CASE
### Input
```bash
Enter N :
6
Enter value[0] :
19
Enter value[1] :
18
Enter value[2] :
27
Enter value[3] :
15
Enter value[4] :
4
Enter value[5] :
2
```
### Output
```bash
Index:  0  1  2  3  4  5
Array: 19  #  #  #  #  2
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
