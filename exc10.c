#include <stdio.h>

void draw_rectangle(int height, int length)
{
    int i;
    int j;

    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < length)
        {
            printf("#\n");
            j++;
        }
        i++;
    }
}

int main(void)
{
    draw_rectangle(4, 2);   
}