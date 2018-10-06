#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t;
    int f[50];
    f[0]=f[1]=f[2]=f[3]=1;
    
    for(int i=4;i<=41;i++)
        f[i]=f[i-1]+f[i-4];
    
    bool is_prime[299915];
    for(int i=0;i<=f[41];i++) is_prime[i]=true;
    for(int i=4;i<=f[41];i+=2)
        is_prime[i]=false;
    for(int i=3;i<=sqrt(f[41]);i+=2)
        {
            for(int j=i;j*i<=f[41];j++)
                is_prime[i*j]=false;
        }
    
    int count[299915];
        count[0]=count[1]=count[2]=0;
    for(int i=2;i<=f[41];i++)
        {
            count[i]=count[i-1];
            if(is_prime[i]) count[i]+=1;
        }
    
    cin>>t;
        while(t--){
            cin>>n;
            cout<<count[f[n]]<<endl;        
        }
        
    return 0;
}
