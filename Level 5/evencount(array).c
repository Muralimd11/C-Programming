#include <stdio.h>

int evencount(int num,int arr[])
{
    int i,value=0;
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)
        {
            value++;
        }
    }
    return value;
}

int main() {
    int n,i;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=evencount(n,a);
    printf("%d",count);

    return 0;
}
