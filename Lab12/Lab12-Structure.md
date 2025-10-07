## โจทย์
จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

## FIX CODE
```c++
#include <stdio.h>

// ประกาศโครงสร้างนักเรียน
struct Student
{
    char Name[20];
    char ID[5]; // เช่น "101"
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

// ฟังก์ชันแปลงคะแนนเป็นเกรด
char *grade_of(float s)
{
    if (s >= 80)
        return "A";
    else if (s >= 75)
        return "B+";
    else if (s >= 70)
        return "B";
    else if (s >= 65)
        return "C+";
    else if (s >= 60)
        return "C";
    else if (s >= 55)
        return "D+";
    else if (s >= 50)
        return "D";
    else
        return "F";
}

int main()
{
    int N = 3; // จำนวนนักเรียน
    int M = 5; // จำนวนวิชา
    S students[N];

    printf("Enter the details of %d students:\n", N);

    // ===== รับข้อมูล =====
    for (int i = 0; i < N; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf(" %19[^\n]", students[i].Name);

        printf("ID: ");
        scanf(" %4s", students[i].ID);

        printf("Score in Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);

        printf("Score in Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);

        printf("Score in Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);

        printf("Score in Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);

        printf("Score in Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    // ===== แสดงผล =====
    printf("\n===== RESULT =====\n");
    for (int i = 0; i < N; i++)
    {
        float sum = 0;

        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);

        // แสดงคะแนน
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
               students[i].ScoreSub1,
               students[i].ScoreSub2,
               students[i].ScoreSub3,
               students[i].ScoreSub4,
               students[i].ScoreSub5);

        // แสดงเกรด
        printf("Grades: %s %s %s %s %s\n",
               grade_of(students[i].ScoreSub1),
               grade_of(students[i].ScoreSub2),
               grade_of(students[i].ScoreSub3),
               grade_of(students[i].ScoreSub4),
               grade_of(students[i].ScoreSub5));

        // คำนวณค่าเฉลี่ย
        sum = students[i].ScoreSub1 +
              students[i].ScoreSub2 +
              students[i].ScoreSub3 +
              students[i].ScoreSub4 +
              students[i].ScoreSub5;

        float avg = sum / M;
        printf("Average Score: %.1f\n", avg);
    }

    return 0;
}


```

## TEST CASE
### Input
```bash
Enter the details of 3 students :
Student 1:
Name: 
John Doe
ID: 
101
Scores in Subject 1: 
77
Scores in Subject 2: 
64
Scores in Subject 3: 
66
Scores in Subject 4: 
54
Scores in Subject 5: 
56

Student 2:
Name: 
Jane Smith
ID: 
102
Scores in Subject 1: 
43
Scores in Subject 2: 
70
Scores in Subject 3: 
76
Scores in Subject 4: 
77
Scores in Subject 5: 
80

Student 3:
Name: 
Mark Johnson
ID: 
103
Scores in Subject 1: 
77
Scores in Subject 2: 
74
Scores in Subject 3: 
76
Scores in Subject 4: 
81
Scores in Subject 5: 
69
```
### Output
```bash
Student 1:
Name: John Doe
ID: 101
Scores: 77 64 66 54 56
Grades: B+ C C+ D D+
Average Scores: 63.4

Student 2:
Name: Jane Smith
ID: 102
Scores: 43 70 76 77 80
Grades: F B B+ B+ A
Average Scores: 69.2

Student 3:
Name: Mark Johnson
ID: 103
Scores: 77 74 76 81 69
Grades: B+ B B+ A C+
Average Scores: 75.4
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
