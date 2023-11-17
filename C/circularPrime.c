#include<stdio.h>
#include<math.h>

int checkPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++) if(n%i == 0) return 0;
    return 1;
}
int checkCircular(int n)
{
    int num = n;
    int count = log10(n) + 1;
    int temp = count;
    while(checkPrime(num)) 
    {
        int remainder = num % 10;
        int dividend = num / 10;
        num = pow(10, count - 1) * remainder + (dividend);
        temp--;
        if(temp == 0) return 1;
    } 
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(checkCircular(n)) printf("TRUE");
    else printf("FALSE");
}