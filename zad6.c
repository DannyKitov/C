#include<stdio.h>
int binary(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%li", binary(n));
}

int binary(int n)
{
    if(n>1) return(binary(n/2)*10+n%2);
    else
    return n;
}