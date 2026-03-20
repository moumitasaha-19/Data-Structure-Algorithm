#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int size=5;

    for (int i=0; i<size; i++)
    {
        a[i-1]=a[i];
    }
     size = size-1;

    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
