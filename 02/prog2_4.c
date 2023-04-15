/*
 * filename: prog2_4.c
 * calculate rectangle's area
 */
 
int main()
{
        int a, b, s;       /* width, length, area */
        
        printf("input width and length: ");
        scanf("%d %d", &a, &b);
        s = a * b;
        printf("The rectangle's area is: %d\n\n", s);
        printf("Address of var a: %p\n", &a);
        return 0;
}
