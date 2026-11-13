#include<stdio.h>
int ascii(char s[]);
int main(void)
{
    char s[10];
    printf("Enter a string: ");
    fgets(s, 10, stdin);
    printf("%c", ascii(s));
    return 0;
}

int ascii(char s[])
{
    char max = s[0];
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] > max) max = s[i];
    }
    return max;
}