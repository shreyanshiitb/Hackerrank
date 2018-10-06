#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,d,m,count=0,j,sum=0;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<i+m;j++)
        {
            sum+=arr[j];
        }
        if(sum==d)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
