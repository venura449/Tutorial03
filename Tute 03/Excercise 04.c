#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter Your Exam marks : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100) {
        if (marks >= 75) {
            printf("Your grade is 'A'");
        } else if (marks >= 65) {
            printf("Your grade is 'B'");
        } else if (marks >= 55) {
            printf("Your grade is 'C'");
        } else if (marks >= 35) {
            printf("Your grade is 'S'");
        } else {
            printf("You failed");
        }
    } else {
        printf("Invalid Input");
    }
    
    return 0; // Added return statement to indicate successful program execution
}

