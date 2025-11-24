#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    float price;
};

int main() {
    int n, i;
    const float PRICE_THRESHOLD = 500.00;

    printf("Enter the number of books: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of books. Exiting.\n");
        return 1;
    }

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("\nDetails for Book #%d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &books[i].id);
        
        getchar(); 

        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        
        size_t len = strlen(books[i].title);
        if (len > 0 && books[i].title[len-1] == '\n') {
            books[i].title[len-1] = '\0';
        }

        printf("Price (e.g., 550.00): ");
        scanf("%f", &books[i].price);
    }

    printf("\n======================================================\n");
    printf("BOOKS PRICED ABOVE $%.2f\n", PRICE_THRESHOLD);
    printf("======================================================\n");

    int found_count = 0;
    
    printf("%-5s %-40s %-10s\n", "ID", "Title", "Price");
    printf("------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        if (books[i].price > PRICE_THRESHOLD) {
            printf("%-5d %-40s $%.2f\n", 
                   books[i].id, 
                   books[i].title, 
                   books[i].price);
            found_count++;
        }
    }
    
    if (found_count == 0) {
        printf("\nNo books found with a price above $%.2f.\n", PRICE_THRESHOLD);
        printf("------------------------------------------------------\n");
    } else {
        printf("------------------------------------------------------\n");
    }

    return 0;
}
