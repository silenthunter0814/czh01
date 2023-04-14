/*
 * filename: prog2_4.c
 * calculate rectangle's area
 */
 
#include <stdio.h>

int main()
{
        int a, b, s;       /* width, length, area */
        
        printf("input width and length: ");
        scanf("%d %d", &a, &b);
        s = a * b;
        printf("The rectangle read is: %d\n", s);
        return 0;
}
