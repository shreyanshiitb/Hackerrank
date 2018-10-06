#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 
    int T;
    cin >> T;
    for(int t = 0; t< T; t++){
        string str1,str2;
        cin >> str1;
        cin >> str2;
        int alpha1[26] = {0},alpha2[26] = {0},len = str1.size(),status = 0;
        for(int i = 0; i < len; i++)alpha1[str1[i]-97]++;
        for(int i = 0; i < len; i++)alpha2[str2[i]-97]++;
        for(int i = 0; i < 26; i++){
            if(alpha1[i] <= alpha2[i] && alpha1[i] != 0 && alpha2[i] != 0){
                status = 1;break;
            }
        }
        if(status)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
