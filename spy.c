#include <stdio.h>
int main()
{
    char ch='n';
    while (ch=='n')
    {
        int n;
        printf("Enter a number\n");
        scanf(" %d",&n);
        printf("Do you want to enter %d?",n);
        scanf(" %c",&ch);
        int sum=0;
        int product=1;
        if ( ch == 'y')
        {
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit;
                product *= digit;
                n /= 10;
            }
            if (sum==product)
            {
                printf("Given number is spy number.\n");
            }
            else
            {
                printf("Given number is not a spy number.");
            }
        }
    }
}