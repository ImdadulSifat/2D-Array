#include<stdio.h>
main()
{
    int x,y,sum=0;
    int a[4][4]={
                {0,1,2,3},
                {4,5,6,7},
                {8,9,10,11},
                {12,13,14,15}
                };
    printf("Inter value in 4x4 array\n");
    printf("Value taken finished!\nShowing value.\n");
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            printf("%d ",a[x][y]);
        }
        printf("\n");
    }
}
