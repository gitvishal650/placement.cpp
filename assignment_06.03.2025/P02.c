// WAP to input two numbers and print all prime numbers in range
#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("Not in range \n");
        return 1;
    }
    for (int i = n1; i <= n2; i++) {
        if (i < 2) continue;
        int prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}
