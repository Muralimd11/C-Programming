#include <stdio.h>
#include <math.h>

int perfect_num(int num)
{
    int temp=num,sum=0;
    int count = log10(num)+1;
    while(num!=0)
    {
        sum+=pow(num%10,count);
        num=num/10;
    }
    return (sum==temp);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
   
    if(perfect_num(n))
    {
        printf("perfect num or armstrong num");
    }
    else
    {
        printf("Not a perfect num or armstrong num");
    }
    
    return 0;
}
