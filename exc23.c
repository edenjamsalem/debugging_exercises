#include <stdio.h>

// this code helps us count how many odd numbers are in an array

int main(void) {
    int i;
    int odd_count;
    int arr[] = {1, 2, 3, 4, 7, 10, 12, 70, 69, 42};

    i = 0;
    while (i < 10)
    {
        odd_count = 0;
        if (arr[i] % 2 == 1)
            odd_count++;
        i++; 
    }
    printf("%d", odd_count);
}