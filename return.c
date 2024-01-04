#include <stdio.h>
int main(void)
{
    char your_name[100];
    printf("Enter your name:");
    scanf(" %[^\n]",&your_name);
    printf("Hello %s\n",your_name);
}