#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    int T;
    char *s;
    int len;
    int sum;
    int i,half;
    int hash[26];
    s=(char*)malloc(sizeof(char)*1000000);
    scanf("%d",&T);
    while(T--)
        {
        sum=0;
        scanf("%s",s);
        len=strlen(s);
        if(len&1)
            printf("-1
");
        else
            {
            half=len/2;
            memset(hash,0,sizeof(hash));
            i=0;
            while(i<half)
            {
                hash[*(s+i)-'a']++;
                i++;
            }
            i=half;
            while(i<len)
            {
                if(hash[*(s+i)-'a']!=0)
                    hash[*(s+i)-'a']--;
                else
                    sum++;
                i++;
            }
            printf("%d
",sum);
            }
        }
    return 0;
}
