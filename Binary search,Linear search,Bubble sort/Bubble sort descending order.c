#include<stdio.h>
int main()
{
    int arr[10]={1,3,2,8,5,7};
    int length=6;
    int i, j, temp;

    for(i=0; i<length-1; i++)
    {
        for(j=0; j<length-1-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Descending:" );

    for(i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
