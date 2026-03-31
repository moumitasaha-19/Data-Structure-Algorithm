#include <stdio.h>

int main()
{
    int arr[10]={1,3,5,7,9,11};
    int size=6;
    int key=7;

    int low=0, high=size-1;
    int mid, position=-1;

    while(low<=high)
    {
        mid = low+(high-low)/2;

        if(arr[mid]==key)
        {
            position=mid;
            break;
        }
        else if(key<arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    if(position!=-1)
    {
        printf("Element found at index %d", position);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
