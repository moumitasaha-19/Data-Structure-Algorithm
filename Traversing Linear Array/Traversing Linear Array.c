#include<stdio.h>
int main()
{
    int i,upper,lower;
    lower=0,
    upper=4;
    int a[5]={1,2,3,4,5};

    for(i=lower; i<=upper; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
