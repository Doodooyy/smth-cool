#include <stdio.h>
int main(void)
{
    int n,k,t,index=-1;
    scanf("%i",&n);
    int nums[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&nums[i]);
    }
    scanf("%i",&k);
    scanf("%i",&t);

    // CHECK CONSTRAINTS
    if((n>=105 || n<=1) || (k<=0 || k>=n) || (t<=-231 || t>=230))
    {
        printf("-1\n");
        return -1;
    }
    for(int i = 0; i < n; i++)
    {
        if(nums[i]<=-231 || nums[i]>=230)
        {
            printf("-1\n");
            return -1;
        }
    }

    // REVERSE ARRAY
    int temp;
    for(int i = 0; i < n/2; i++) 
    {
        temp = nums[i];
        nums[i] = nums[n-i-1];
        nums[n-i-1]=temp;
    }

    for(int i = 0; i < k-1; i++)
    {
        if(i!=k-i-1)
        {
        temp = nums[i];
        nums[i] = nums[k-i-1];
        nums[k-i-1]=temp;
        }
    }

    for(int i = k; i < (k+n)/2; i++) 
    {
        if((k+n)/2>=k)
        temp = nums[i];
        nums[i] = nums[n+k-i-1];
        nums[n+k-i-1]=temp;
    }

    for(int i = 0; i < n; i++)
    {
        if(nums[i]==t)
        { 
         index = i;
         break;
        }
    }

    if(index == -1){
        printf("-1\n");
        return -1;
    }

    for(int i = 0; i < n; i++)
    printf("%i ",nums[i]);

    printf("\n%i\n",index);
}