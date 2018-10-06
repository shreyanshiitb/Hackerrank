#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000
 
int main() {
 
    int n,i,j;
    char *a[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        *(a+i)=(char*)malloc(sizeof(char)*n);
    for(i=0;i<n;i++)
        scanf("%s",*(a+i));
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                {
                printf("%c",*(*(a+i)+j));
            }
                else if(((*(*(a+i)+j) > a[i][j-1] && *(*(a+i)+j) > a[i][j+1])) && (a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j]))
                {
                    printf("X");
                }     
            else
                printf("%c",*(*(a+i)+j));
        }
        printf("
");
    }
    return 0;
}
