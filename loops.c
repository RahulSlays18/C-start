#include <stdio.h>
void loop1(int rows);
void loop2(int rows);
void loop3(int rows);
void loop4(int rows);
void loop5(int rows);
int main()
{
    int n;
    int x;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("Enter your choice of pattern using \'*\'\n");
    printf("1.Enter 1 for rectangular alignment\n");
    printf("2.Enter 2 for left aligned right triangle\n");
    printf("3.Enter 3 for reversed left aligned right triangle\n");
    printf("4.Enter 4 for right aligned right triangle\n");
    printf("5.Enter 5 for reverse right aligned right triangle\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        loop1(n);
        break;
        case 2:
        loop2(n);
        break;
        case 3:
        loop3(n);
        break;
        case 4:
        loop4(n);
        break;
        case 5:
        loop5(n);
        break;
        default:
        printf("Enter right choice\n");
        break;
    }
    return 0;
}
void loop1(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void loop2(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void loop3(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=rows;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void loop4(int rows)
{
    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }

        // Print asterisks
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void loop5(int rows)
{
    for (int i = rows; i >= 1; i--) {
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }

        // Print asterisks
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}