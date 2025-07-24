## โจทย์
ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ 
<br />F อยู่ในช่วงคะแนนน้อยกว่า 50 , 
<br />D อยู่ในช่วงระหว่าง 50 ถึง 55 , 
<br />D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , 
<br />C อยู่ในช่วงระหว่าง 60 ถึง 65 , 
<br />C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , 
<br />B อยู่ในช่วงระหว่าง 70 ถึง 75 , 
<br />B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , 
<br />A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป 
<br /><br />(กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)

## FIX CODE
```c++
#include <iostream>

int main(){
    int score = 0;
    printf("Please enter your score :");
    scanf("%d", &score);
    printf("Grade :");
    if(score >= 80){
        printf("A");
    } else if(score >= 75 && score < 80){
        printf("B+");
    } else if(score >= 70 && score < 75){
        printf("B");
    }else if (score >= 65 && score < 70){
        printf("C+");
    }else if (score >= 60 && score < 65){
        printf("c");
    }else if (score >= 50 && score < 60){
        printf("D+");
    }else if (score >= 50 && score < 55){
        printf("D");
    }else{
        printf("F");
    }//enf if
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
enter score :
80
```
### Output
```bash
A !
```

## TEST CASE
### Input
```bash
enter score :
55
```
### Output
```bash
D+ !
```

## TEST CASE
### Input
```bash
enter score :
64
```
### Output
```bash
C+ !
```

## TEST CASE
### Input
```bash
enter score :
44
```
### Output
```bash
F !
```

## TEST CASE
### Input
```bash
enter score :
hello
```
### Output
```bash
please enter number only.
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
