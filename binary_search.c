#include <stdio.h>

int main(void)
{
    int arr[] = {58,62,75,88,92,105}; // initialize array
    int first = 0, last = sizeof(arr)/sizeof(arr[0])-1; // first and last value declaration
    int target = 91; 
    int mid = (first + last)/2; 

    while(arr[mid]!=target && last <= first){
        mid = (first + last)/2; // dont forget to reset mid value every time in loop
        if(target > arr[mid]) // target on right
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if(arr[mid]==target)
    printf("target %d found at %d\n",target,mid);
    else
    printf("Element not found buddy\n");
    return 0;
}