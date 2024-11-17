#include <stdio.h>

int main(void)
{
    int arr[6] = {58,62,75,88,92,105}; // initialize array
    int target = 92; 
    int index;
    for(int i = 0; i < 6; i++)
        if(arr[i]==target)
            index = i;
    for(int i = index; i < 6; i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i = 0; i < 5; i++)
        printf("%i ",arr[i]);
}