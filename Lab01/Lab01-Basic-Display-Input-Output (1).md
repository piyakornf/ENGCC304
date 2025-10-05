## โจทย์
จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง

## FIX CODE
```c++
#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    printf("กรอกหมายเลขที่ 1 ");
    scanf("%d", &num1);
    
    printf("กรอกหมายเลขที่ 2 ");
    scanf("%d", &num2);
    
    printf("กรอกหมายเลขที่ 3 ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    printf("ผลรวม = %d\n", sum);

    return 0;
}
```

## TEST CASE
### Input
```bash
2 3 1
```
### Output
```bash
- - - - - -
 6
```