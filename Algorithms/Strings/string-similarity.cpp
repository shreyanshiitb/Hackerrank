#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int Match(const string &,const string &);
int main()
{
    int test;
    cin>>test;
    string s,s1;
    int len;
    while(test--)
    {
        int sum=0,c=0;
        cin>>s;
        len=s.length();
        int index[len];
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]==s[0])
            {
                index[c]=i;
                c++;
            }
            i++;
        }
        for(i=0;i<c;++i)
        {
            s1=s.substr(index[i],len);
            sum+=Match(s,s1);
        }
        cout<<sum<<endl;
    }
    return 0;
}


int Match(const string & str1,const string & str2)
{
     if(str1.empty() || str2.empty())
     {
          return 0;
     }
     int maxSubstr=0;
     int len=str2.size();
     for(int i=0;i<len;++i)
     {
        if(str2[i]==str1[i])
            ++maxSubstr;
        else
            return maxSubstr;

     }
     return maxSubstr;
}
