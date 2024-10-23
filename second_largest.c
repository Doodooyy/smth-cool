#include <stdio.h>
int main(){
    int arr[] = {1,20,3,4,10,19,15};
    int n = sizeof(arr)/sizeof(arr[0]); // len of array
    int max = 0, max2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max=arr[i];   
    }
     for(int i = 0; i < n; i++)
    {
        if(arr[i]>max2 && arr[i]!=max)
        max2=arr[i];   
    }  
    printf("%i\n",max2);
    return 0;
}