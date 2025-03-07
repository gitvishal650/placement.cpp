// WAP to input a string count of alphabets, digits and special characters in that string
#include <stdio.h>
#include <string.h>
main() {
    char str[100];
    int flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
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
}
