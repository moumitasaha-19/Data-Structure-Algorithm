#include <stdio.h>
int main()
{
    int a[10] = {3,4,2,5,7,2,4,5,2,0};
    int size=8;

    for(int x=0; x<size; x++)
    {
       for(int y=x+1; y<size; y++)
        {
            if(a[x]==a[y])
            {
                for(int z=y+1; z<size; z++)
                {
                    a[z-1]=a[z];
                }
                size=size-1;
                y=y-1;
            }
        }
    }
    for(int x=0; x<size; x++)
    {
        printf("%d ", a[x]);
    }
    return 0;
}
