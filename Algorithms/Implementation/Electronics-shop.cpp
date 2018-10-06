#include <bits/stdc++.h>

using namespace std;

long long arr[1000000];
int main()
{
 long long b,n,m,i,b1,flag=0,j;
    cin>>b>>n>>m;
    long long keyboard[n],usb[m];
    for(i=0;i<n;i++)
        cin>>keyboard[i];
    for(i=0;i<m;i++)
        cin>>usb[i];
    sort(keyboard,keyboard+n);
    sort(usb,usb+m);
    for(i=n-1;i>=0;i--)
    {
        b1=b;
        b1-=keyboard[i];
        if(b1>0)
        {
            for(j=m-1;j>=0;j--)
            {
               // cout<<b1<<endl;
                if(b1-usb[j]>=0)
                {
                    flag++;
                arr[flag]=keyboard[i]+usb[j];
                }
            }
            
        }
      
    }
    sort(arr,arr+flag);
    if(flag==0)
        cout<<"-1"<<endl;
    else
        cout<<arr[flag-1]<<endl;
    return 0;
}
