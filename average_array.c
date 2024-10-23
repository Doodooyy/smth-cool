#include <stdio.h>

int main(void)
{
    int arr[] = {1,2,5,5,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum+=arr[i];
    }
    float avg = (float)sum/len;
    printf("%g\n",avg);
}