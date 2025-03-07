// WAP to input 10 floating values from user and show the smallest and biggest numbers in given values
#include <stdio.h>
main() {
    float ar[5], big, small;
    printf("Enter 10 floating numbers:\n");    
    for (int i = 0; i < 5; i++) {
        scanf("%f", &ar[i]);
    }
    big = small = ar[0];
    for (int j = 1; j < 5; j++) {
        if (ar[j] > big) {
            big = ar[j];
        }
        if (ar[j] < small) {
            small = ar[j];
        }
    }
    printf("Smallest float is: %.2f\n", small);
    printf("Biggest float is: %.2f\n", big);   
}
