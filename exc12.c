#include <stdio.h>

//  this program prints a square of hashtags at a chosen size

int main(void)
{
    int i;
    int size;
    
    size = 4;
    i = 0;
    while (i < size)
    {
        i = 0;
        while (i < size) 
        {
            printf("#");
            i++;
        }
        printf("\n");
        i++;
    }
}