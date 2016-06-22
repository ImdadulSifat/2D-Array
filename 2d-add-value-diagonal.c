#include<stdio.h>
main()
{
    int x,y,sum=0;
    int a[4][4];
    printf("Inter value in 4x4 array\n");
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            scanf("%d",&a[x][y]);
        }
    }
    printf("Value taken finished!\nShowing value.\n");
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            if(x==y)
            {
                sum=sum+a[x][y];
            }
        }
    }
    printf("%d\n",sum);
}
