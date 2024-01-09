#include <stdio.h>
void loop1(int rows);
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    loop1(n);
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