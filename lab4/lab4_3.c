#include <stdio.h>
#include <math.h>
int main(void)
{
    float x = 1.571; // radians
    int n = 5; int l=1; long int fc=1; // fc = factorial of 3, 5 ,7 ...
    double sine = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= l; j++)
        {
            fc*=j;
        }
        
        sine += pow(-1,i)*pow(x,l)/fc;
        l+=2;
        fc=1;
    }
printf("%f\n",sine);
}
