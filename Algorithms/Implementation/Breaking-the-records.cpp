#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,max,min,cmax,cmin,no;
    max=-1;
    min=1000000000;
    cmax=cmin=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>no;
         if(max<no)
        {
            if(max!=-1)
                cmax++;
            max=no;
        }
         if(min>no)
        {
            if(min!=1000000000)
                cmin++;
            min=no;
        }
    }
    cout<<cmax<<" "<<cmin<<endl;
    return 0;
}
