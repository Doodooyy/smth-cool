#include <stdio.h>
int n,j;
int main()
{
    scanf("%i %i", &n, &j);
    printf("\n\n");
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= j; k++)
        {
            printf("%i ",i*k);
        }
        printf("\n");
    }
}