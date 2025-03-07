//WAP to input a string and reverse print it
#include <stdio.h>
#include <string.h>
main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
