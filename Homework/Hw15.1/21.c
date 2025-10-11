#include <stdio.h>

int file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return -1;                 // เปิดไฟล์ไม่ได้

    int count = 0;
    char token[256];                    // เก็บคำละไม่เกิน 255 ตัวอักษร
    while (fscanf(fp, "%255s", token) == 1) {
        count++;                        // อ่านได้ 1 คำก็นับเพิ่ม
    }
    fclose(fp);
    return count;
}

int main(void) {
    char fname[256];

    printf("Enter file name:\n");
    scanf("%255s", fname);
    
    int total = file(fname);
    if (total < 0) {
        printf("Cannot open '%s'\n", fname);
        return 0;
    }

    printf("Total number of words in '%s' : %d words\n", fname, total);
    return 0;
}
