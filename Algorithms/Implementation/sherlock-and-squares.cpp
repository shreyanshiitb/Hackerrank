#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,a,b;
    cin >> T;;
    while(T--){
        cin >> a >> b;
        printf("%d
",(int)(floor(sqrt((double)b)) - ceil(sqrt((double)a))+1));
    }
    return 0;
}
