#include <stdio.h>
#include <string.h>
#define MAX 1000

int checkanagram(char a[],char b[])
{
    int count[256]={0};
    
    //It store all values from 0 to 256 as 0
    
    for(int i=0;i<strlen(a);i++)
    {
        count[a[i]]++;
    }
    
    //For every letter in string the occurence of that will be stored by its ascii value... ex:'aaa' count[97]=3
    
    for(int i=0;i<strlen(b);i++)
    {
        count[b[i]]--;
    }
    // If same letters are present here also then the count will be decremented
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            return 0;
            break;
        }
    }
    
    //If even after decrement any letters frequency is present then not anagram
    
    return 1;
}

int main() {
    char a[MAX];
    printf("Enter the word1: ");
    scanf("%[^\n]s",a);
    getchar();
    char b[MAX];
    printf("Enter the word2: ");
    scanf("%[^\n]s",b);
    int result=checkanagram(a,b);
    
    if(result==1)
    {
        printf("ANagram");
    }
    else
    {
        printf("not anagram");
    }
    return 0;
}
