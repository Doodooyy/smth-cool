#include <stdio.h>
int main(void)
{
    int arr[] = {5,1,6,2,9,4,7,0};
    int len = sizeof(arr)/sizeof(int);
    char mode = 'a';

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len - 1; j++)
        {   
            switch(mode)
            {
            case 'a':
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
                break;
            case 'd':
            if(arr[j] < arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
                break;
            }
        }
    }
    for(int i = 0; i < len; i++)
        printf("%i ",arr[i]);
}