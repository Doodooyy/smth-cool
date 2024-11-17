#include <stdio.h>

int main(void)
{
    int arr[] = {58,62,75,88,92,105}; // initialize array
    int target = 92; 
    int length = 6;
    int index;
    for(int i = 0; i < length; i++)
    {
        if(arr[i]==target)
        index=i;
    }
    for(int i = index; i < length; i++)
        arr[i] = arr[i+1];
    length--;
    for(int i = 0; i < length; i++)
        printf("%i\n",arr[i]);
}