#include<stdio.h>
int main(void)
{
    int arr[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<4;i++)
        for(int j=0;j<4-i;j++)
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    
    int sum = 0;        
    for(int i=0;i<5;i++)   
        sum += arr[i]*i;

    printf("%d", sum);   
    return 0; 
}