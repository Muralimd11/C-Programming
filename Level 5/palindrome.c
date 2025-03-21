#include <stdio.h>
#include <string.h>

int palindrome(char s[]){
    int a=0,b=strlen(s)-1;
    while(a<b)
    {
        if(s[a]!=s[b])
        {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}
int main() {
    char a[100];
    printf("Enter sentence:");
    scanf("%[^\n]s",a);
    int final=palindrome(a);
    if (final==1)
    {
        printf("The sentence is a palindrome.\n");
    } 
    else
    {
        printf("The sentence is not a palindrome.\n");
    }
    
    return 0;
}
