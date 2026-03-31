#include <stdio.h>

int main()
{
    int arr[10] ={1,2,3,4,5,6,7,8};
    int size=8;
    int key=5;
    int pos=-1;

    for (int idx=0; idx<size; idx++)
    {
        if (arr[idx]==key)
        {
            pos=idx;
            printf("Element found at position %d\n", pos);
            break;
        }
    }

    if (pos==-1)
    {
        printf("Element not found");
    }

    return 0;
}
