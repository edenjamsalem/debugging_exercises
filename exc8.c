#include <stdio.h>

//  this program prints a square of hashtags at a chosen size

int main(void)
{
    int i;
    int j;
    int size;
    
    size = 4;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            printf("#");
            j++;
        }
        i++;
    }
}
