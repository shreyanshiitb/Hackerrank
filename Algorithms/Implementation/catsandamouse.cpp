#include<bits/stdc++.h>
using namespace std;
long long int t,a,b,x,y,z;
int main(){
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        a=abs(x-z);
        b=abs(y-z);
        if(a<b){
            cout<<"Cat A"<<endl;
        }
        else if(b<a){
            cout<<"Cat B"<<endl;
        }
        else{
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}
