#include<stdio.h>
void main()
{
    int i,x,c=0;
    printf("Enter a number");
    scanf("%d", &x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        c++;

    }
    if(c>1)
    printf("it is not a prime number");
    else
    printf("It is a prime number number");
}
