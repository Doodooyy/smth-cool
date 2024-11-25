#include <stdio.h>
int main(void)
{
    int left,right,og,is=1;
    printf("left = ");
    scanf("%i",&left);
    printf("right = ");
    scanf("%i",&right);

    for(int i =left; i <= right; i++)
    {
        og = i;
        is = 1;
        while(og!=0)
        {
            if(i%(og%10)!=0)
            {
               is=0;
            }
            og/=10;
        }
        if(is==1)
        printf("%i ",i);
    }
}