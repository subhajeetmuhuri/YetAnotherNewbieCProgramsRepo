#include <stdio.h>
void main()
{
    int n, m, rev = 0, r;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("Reverse of %d is %d\n", m, rev);
}
