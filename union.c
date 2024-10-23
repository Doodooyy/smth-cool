#include <stdio.h>

int main(void)
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,6,7,8};
    int len1 = 5, len2 = 6;
    for(int i = 0; i < len1; i++)
    {
        for(int j = 0; j < len2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%i\n",arr1[i]);
            }
        }
    }
}