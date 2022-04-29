#include<stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks>=97 && marks<=100)
    {
        printf("A+\n");
    }
    else if (marks>=90 && marks<=96)
    {
        printf("A\n");
    }else
    if (marks>=87 && marks<=89)
    {
        printf("A-\n");
    }else
    if (marks>=83 && marks<=86)
    {
        printf("B+\n");
    }else
    if (marks>=80 && marks<=82)
    {
        printf("B\n");
    }else
    if (marks>=77 && marks<=79)
    {
        printf("B-\n");
    }else
    if (marks>=73 && marks<=76)
    {
        printf("C+\n");
    }else
    if (marks>=70 && marks<=72)
    {
        printf("C\n");
    }else
    if (marks>=67 && marks<=69)
    {
        printf("C-\n");
    }else
    if (marks>=63 && marks<=66)
    {
        printf("D+\n");
    }else
    if (marks>=60 && marks<=62)
    {
        printf("D\n");
    }else
    printf("F\n");
    return 0;
}
