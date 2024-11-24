#include <stdio.h>
int a = 0, b = 1;
int G(int m, int n);
void F(int n);
int main(void)
{
    int n,n1,n2;
    char mode;
    scanf("%i",&n);
    for(int i = 0; i < n; i++)
    {
        scanf(" %c",&mode);
        if(mode == 'F')
        {
            scanf("%i",&n1);
            F(n1);
            printf("\n");
        }
        if(mode == 'G')
        {
            scanf("%i %i",&n1,&n2);
            printf("%i",G(n1,n2));
            printf("\n");
        }
    }
    

    return 0;
}

int G(int m,int n)
{
    if(n==0)
        return m;
    return G(n, m%n);
}
void F(int n)
{
    if(n==0)
        return ;
    printf("%i ",a);
    a=a+b;
    b=a-b;
    F(n-1);
}