#include <stdio.h>
int main(void)
{
    int n = 496;
    int sum = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
        printf("Perfect number");
    else
        printf("Fuckoff number");
    return 0;
}