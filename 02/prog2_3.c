/* 
 * file name: prog2_3.c
 */

#include <stdio.h>

int main()
{
        int x, y, z;
        
        x = 10;
        y = 10;
        z = x == y;
        printf("x = %d\ty=%d\tz = %d\n", x, y, z);
        x++;
        z = x == y;
        printf("x = %d\ty=%d\tz = %d\n", x, y, z);
        z = x != y;
        printf("x != y\tz = %d\n", z);
        return 0;
}
