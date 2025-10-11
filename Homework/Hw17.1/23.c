#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_STR   100

typedef struct {
    int  id;
    char title[MAX_STR];
    char author[MAX_STR];
    int  year;
} Book;

void addBook(Book books[], int *count);
void searchBook(Book books[], int count, char title[]);
void displayBooks(Book books[], int count);

int main(void) {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    while (1) {
        printf("==== Library Menu ====\n");
        printf("1. Add new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addBook(books, &count);
        } else if (choice == 2) {
            char key[MAX_STR];
            printf("Enter Title to Search: ");
            scanf(" %99[^\n]", key);  // อ่านทั้งบรรทัดจนถึง \n
            searchBook(books, count, key);
        } else if (choice == 3) {
            displayBooks(books, count);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid option.\n");
        }
    }
    return 0;
}

void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }
    Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Title: ");
    scanf(" %99[^\n]", b.title);

    printf("Enter Author: ");
    scanf(" %99[^\n]", b.author);

    printf("Enter Year: ");
    scanf("%d", &b.year);

    books[*count] = b;
    (*count)++;
    printf("Book added successfully!\n");
}

void searchBook(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            return;
        }
    }
    printf("Book not found.\n");
}

void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
    }
}
