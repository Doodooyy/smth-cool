#include <stdio.h>
int main(void)
{
    int t, n, num=9, og, is=0;
    scanf("%i",&t);

    for(int j = 0 ; j < t; j++)
    {
        num=9;
        scanf("%i",&n);
        while(1) // loop until num found
        {
            // Check if all digits are 9's or 0's
            og = num;
            is=1; // assume only 9's and 0's are there
            while(og>0)
            {
                if(og%10==0 || og%10==9) // check last digit == 9 or 0
                    og/=10;
                else
                {
                    is=0; // number other than 9 and 0 is there.
                    break;
                }
            } 
            if(is && num%n==0)
                break;
            else
                num+=9; // If not divisible, add 9 and repeat.
        }
        printf("%i\n",num);
    }
    
    return 0;
}