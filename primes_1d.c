#include <stdio.h>
int main(void)
{

    int len;
    scanf("%i",&len);
    int arr[len];
    for(int i = 0; i < len; i++)
        scanf("%i",&arr[i]);
    int isPrime;
    for(int i = 0; i < len; i++)
    {
        if(arr[i]<=1)
            continue;
        isPrime = 1;
        for(int j = 2; j <= arr[i]/2; j++)
        {
            if(arr[i]%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%i is prime\n",arr[i]);
        }
}