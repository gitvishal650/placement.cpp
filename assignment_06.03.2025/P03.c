// WAP to input a number and print that much of prime numbers
#include <stdio.h>
int main() {
    int n, count = 0, num = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (count < n) {
        int prime = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    return 0;
}
