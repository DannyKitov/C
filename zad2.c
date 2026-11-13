#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int res = 1;
    while(n > 0)
    {
        res *= n%10;
        n /= 10;
    }

    printf("%d", res);
    return 0;
}