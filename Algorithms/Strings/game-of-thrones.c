#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
  
findPalind(char *arr)
{
      
    int flag = 0;
    int i=0;
    int hash[26],c=0;
    memset(hash,0,sizeof(hash));
    while(*(arr+i))
        {
        hash[*(arr+i)-'a']++;
        if(hash[*(arr+i)-'a']==2)
            hash[*(arr+i)-'a']=0;
        i++;
    }
    i=0;
    while(i<26)
        {
        if(hash[i]>0)
            c++;
        if(c>1)
            {
            flag=1;
            break;
        }
        i++;
    }
    if (flag==0)
        printf("YES
");
    else
        printf("NO
");
     
    return;
}
int main() {
 
    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}

