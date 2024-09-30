#include <stdio.h>

char* to_lower(char str[]) 
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] -= 32;
        i++;
    }
    return str;
}

int main(void) {
    char str[] = "Hello, Hugo";

    printf("%s\n", to_lower(str));
}