#include<stdio.h>
int factorial(int n)
{
    if (n>0)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a;
    printf("ENTER THE NUMBER FOR FACTORIAL--> ");
    scanf("%d", &a);
    printf("FACTORIAL OF %d IS %d", a, factorial(a));
}