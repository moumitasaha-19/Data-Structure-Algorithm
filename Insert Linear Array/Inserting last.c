#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5};
    int n=5;
    int value=6;

   arr[n]=value;


    for(int i=0; i<n+1; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}
