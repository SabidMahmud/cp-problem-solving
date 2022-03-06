#include <stdio.h>

int main()
{
    char ch;
    char str[9];
    char sen[15];
    scanf("%c\n", &ch);
    scanf("%s\n", str);
    scanf("%[^\n]%*c", &sen);
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sen);
    return 0;
}
