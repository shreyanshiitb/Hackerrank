#include<iostream>
using namespace std;

int main(){

    int ar[110],k,n,cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)cin >> ar[i];
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((ar[i]+ar[j])%k == 0)cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
