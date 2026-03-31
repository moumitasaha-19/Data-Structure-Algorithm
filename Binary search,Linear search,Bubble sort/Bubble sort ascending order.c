#include <stdio.h>

int main()
{
    int arr[10]={2,4,1,5,7,9};
    int size=6;
    int pass,index,temp;

    for(pass=1; pass<size; pass++)
    {
        for(index=0; index<size-pass; index++)
        {
            if(arr[index]>arr[index+1])
            {
                temp=arr[index];
                arr[index]=arr[index+1];
                arr[index+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for (index=0; index<size; index++)
    {
        printf("%d ",arr[index]);
    }

    return 0;
}
