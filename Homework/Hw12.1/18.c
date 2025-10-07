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
