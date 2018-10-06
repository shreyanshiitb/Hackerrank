#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000
/*
void swap(char *s,char *v)
    {
    char temp;
    temp=*s;
    *s=*v;
    *v=temp;
}
 
void sort(char *s)
    {
    int i,j;
    for(i=0;*(s+i);i++)
        {
        for(j=i+1;*(s+j);j++)
            {
            if(*(s+i)>*(s+j))
                swap(*(s+i),*(s+j));
        }
    }
}*/
 
void stringcopy(char *s,char *v)
    {
    int i=0;
    while(*(v+i))
        {
        *(s+i)=*(v+i);
        i++;
    }
    *(s+i)='\0';
}
 
void removedups(char *s)
    {
    int hash[26]={0};
    char *v;
    v=(char*)malloc(sizeof(char)*MAX);
    int i=0,j=0;
    while(*(s+i))
        {
        if(hash[*(s+i)-'a']==0)
            {
            *(v+j)=*(s+i);
            j++;
        }
        hash[*(s+i)-'a']=1;
        i++;
    }
    *(v+j)='\0';
    stringcopy(s,v);
}
 
int main() {
 
    char *s[MAX];
    int n;
    int i,j;
    int hash[26],count=0;
    memset(hash,0,sizeof(hash));
    scanf("%d",&n);
    for(i=0;i<n;i++)
        *(s+i)=(char*)malloc(sizeof(char)*1000);
    i=0;
    while(i<n)
        {
        scanf("%s",*(s+i));
        //sort(*(s+i));
        removedups(*(s+i));
        j=0;
        while(*(*(s+i)+j))
            {
            hash[*(*(s+i)+j) - 'a']++;
            j++;
        }
        i++;
    }
    i=0;
    while(i<26)
        {
        if(hash[i]==n)
            count++;
        i++;
    }
    printf("%d",count);
    return 0;
}

