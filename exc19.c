#include <stdio.h>

int is_alpha(char c) {
    return ((c <= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'));
}

int main(void) {
    printf("%d\n", is_alpha('A'));
    printf("%d\n", is_alpha('2'));
    printf("%d\n", is_alpha('b'));
    printf("%d\n", is_alpha('*'));
}