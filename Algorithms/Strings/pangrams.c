#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000000
 
int main() {
 
    int len,hash[26],u=0,i;
 char str[MAX];
 gets(str);
 len=strlen(str);
 memset(hash,0,sizeof(hash));
 for(i=0;i<len;i++)
 {
  if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
   {
    if(islower(str[i]))
    {
     if(hash[str[i]-'a'] == 0)
     u++;
     hash[str[i]-'a']=1;
    }
    else
    {
     if(hash[str[i]-'A'] == 0)
     u++;
     hash[str[i]-'A']=1;
    }
   }
 }
 if(u==26)
 printf("pangram");
 else
 printf("not pangram");    
    return 0;
}
