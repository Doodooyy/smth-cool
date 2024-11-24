#include <stdio.h>
int main(void)
{
    int n,p,c = 0;
    int row,col;
    scanf("%i",&n);
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%i",&arr[i][j]);
        }
    }
    scanf("%i",&p);
    int sortedarr[n*n],temp;
    // CONVERT 2D ARRAY TO 1D ARRAY
      for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c+=1;
            sortedarr[n*n-c] = arr[i][j];

        }
    }
    // SORT THE ARRAY
    for(int i = 0; i < n*n; i++)
    {
        for(int j = 0; j < n*n-1; j++)
        {
            if(sortedarr[j]<sortedarr[j+1])
            {
                temp = sortedarr[j];
                sortedarr[j] = sortedarr[j+1];
                sortedarr[j+1] = temp;
            }
        }
    }
    int ele = sortedarr[p-1];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j]==ele)
            {
            row = i, col = j;
            }
        }
    }
    printf("%i %i %i",row,col, ele);
    return 0;
}