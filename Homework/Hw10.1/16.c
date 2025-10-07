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
