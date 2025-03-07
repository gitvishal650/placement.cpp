/* Write a C program that takes a password as input and checks if it
meets the following criteria:
At least 8 characters long
Contains at least one uppercase letter
Contains at least one lowercase letter
Contains at least one digit
Contains at least one special character (@, #, $, %, etc.) */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char password[50];
    int U = 0, L = 0, D = 0, sp = 0;
    printf("Enter password: ");
    gets(password);
    if (strlen(password) < 8) {
        printf("Must have atleast 8 characters \n");
        return 0;
    }
    for (int i = 0; password[i]; i++) {
        if (isupper(password[i])) U++;
        else if (islower(password[i])) L++;
        else if (isdigit(password[i])) D++;
        else sp = 1;
    }
    if (U>0 && L>0 && D>0 && sp>0)
        printf("Strong Password\n");
    else
        printf("Must include 1 uppercase, 1 lowercase, 1 digit, and 1 special character\n");
}
