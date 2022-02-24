#include<stdio.h>
int main()
{
    char ch; 
    char str[9];
    char sen[15];
    
    scanf("%c", &ch);
    scanf("%s", str);
    scanf("%*[^\n]%*c", sen);
    

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%c\n", sen);
    getchar();
}