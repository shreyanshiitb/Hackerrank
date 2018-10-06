#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    int pos = 0;
    int cnt = 0;
    while (pos < n - 1) {
        if (pos + 1 == n - 1) {
            pos += 1;
        } else if (c[pos+2] == 0) {
            pos += 2;
        } else {
            pos += 1;
        }
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
