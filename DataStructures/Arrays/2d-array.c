#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[6][6];
    int max=-99999,sum;
    for(int i = 0; i < 6; i++)
    {
       for(int j = 0; j < 6; j++)
       {
          
          scanf("%d",&a[i][j]);
       }
    }
        for(int i=0; i<6-3+1 ; i++)
        {
        for(int j=0; j<6-3+1; j++)
            {
			sum=0;
            sum = sum + a[i][j] +a[i][j+1] + a[i][j+2]+a[i+1][j+1] +a[i+2][j] + a[i+2][j+1]+a[i+2][j+2] ;
			if(max<sum)			
			max = sum;
             }
        }
    printf("%d",max);
        return 0;
}

