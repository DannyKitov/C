#include<stdio.h>
int index(int n, int arr[5]);
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

    int n;
    printf("Enter the number to search: ");
    scanf("%d", &n);
    printf("%d", index(n, arr));
    return 0;
}

int index(int n, int arr[5])
{
    int l=0,r=4,mid,found=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==n)
        {
            found=mid;
            break;
        }
        else if(arr[mid]<n)
            l=mid+1;
        else
            r=mid-1;
    }
    return found;
}