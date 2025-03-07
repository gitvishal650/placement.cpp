// WAP to input a string and check it to be palindrome
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int flag = 1;
    printf("Enter a string: ");
    scanf("%99s", str);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
