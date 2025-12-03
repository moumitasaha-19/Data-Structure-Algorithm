#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,5,6};
    int n=5;
    int value=4;
    int p=4;
    for(int i=n; i>p-1; i--)
    {
        arr[i] = arr[i-1];
    }
     arr[p-1]=value;
   for(int i=0; i<n+1; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}

