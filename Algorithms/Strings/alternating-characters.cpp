#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < str.size()-1; i++){
            if(str[i] == str[i+1])cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
