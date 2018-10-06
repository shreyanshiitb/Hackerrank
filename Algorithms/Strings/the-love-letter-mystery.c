#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int i, n, len, pos, ops, end;
    scanf("%d",&n);
    char str[n][10000];
    char a,b;
    for (i=0;i<n;i++) {
        scanf("%s",str[i]);
    }
    for (i=0;i<n;i++) {
        len = strlen(str[i]);
        pos = 0;
        end = len - 1;
        ops = 0;
        while ( pos < end) {
               a = str[i][pos];
               b = str[i][end];
               if ( a != b ) {
                   if ( b > a ) 
                       ops = ops + (b -a);
                   else 
                       ops = ops + (a -b); 
               }
               pos++;
               end--;    
        }
        printf("%d
", ops);
    }

return 0;
}

