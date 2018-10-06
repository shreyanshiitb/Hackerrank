#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d;
    int *a[100000],*b[100000];
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    d = d % n;
    for(int i=0;i<n;i++)
        {
    b[i] = a[(i+d)%n];
    printf("%d ",b[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

