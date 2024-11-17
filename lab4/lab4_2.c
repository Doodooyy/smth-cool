#include <stdio.h>
int main(void)
{
    int n = 6;
    int p = 1;
    // 1
    // 23
    // 456

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%i ",p);
            p++;
        }
        printf("\n");
    }
}