#include <stdio.h>

// this program prints all the different combinations of 2 digits

int main(void)
{
    int i;
    int j;

    i = 1;
    while (i <= 8)
    {
        j = i + 1;  
        while (j <= 9)
        {
            printf("%d%d ", j, i);
            j++;
        }
        i++;   
    }
}