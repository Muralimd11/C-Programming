#include <stdio.h>

int string_len(char s[]){
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
int main() {
    char a[100];
    printf("Enter sentence:");
    scanf("%[^\n]s",a);
    int len=string_len(a);
    printf("%d",len);
    return 0;
}
