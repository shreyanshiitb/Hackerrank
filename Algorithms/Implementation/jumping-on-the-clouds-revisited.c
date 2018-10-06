#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,k,res=0;
    scanf("%d%d",&n,&k);
    int i,j,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n)
    {
        if(a[i]==1)
        {
            res=res+3;    
        }
        else
        {
            res=res+1;
        }
        i=i+k;
    }
    printf("%d",100-res);
    return 0;

}

