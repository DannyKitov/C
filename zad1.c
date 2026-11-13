#include<stdio.h>
int main(void)
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    int div;
    int divCount; 
    for(int i=0;i<5;i++)
    {
        div = 2;
        divCount = 0;
        for(div;div<=arr[i]/2;div++)
        {
            if(arr[i] % div == 0 || arr[i] == 1)
            {
              divCount++;  
              break;
            }
        }
        if(divCount == 0) sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
