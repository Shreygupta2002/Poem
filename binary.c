#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    long int rem=0;
    while(n>0)
    {
        rem=rem+(n%2)*pow(10,c);
        c++;
        n=n/2;
    }
    printf("%ld",rem);
}