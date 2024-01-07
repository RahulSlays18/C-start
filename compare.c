#include <stdio.h>
int main()
{
    char ans='n';
    while (ans=='n')
    {
        int x,y;
        printf("Enter two integers\n");
        scanf("%d%d",&x,&y);
        printf("Are you sure %d and %d are your choice?Enter 'y' for yes and 'n' for no\n",x,y);
        scanf(" %c",&ans);
        if (ans == 'y')
        {
            if (x>y)
            printf("x is greater than y\n");
            else if (x<y)
            printf("x is lesser than y\n");
            else
            printf("x is equal to y\n");
        }
    }
}
