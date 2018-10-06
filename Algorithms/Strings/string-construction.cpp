#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
 string str;
 cin >> N;
 for(int n = 0; n < N; n++){
        cin >> str;
        int len = str.length(),cnt = 0,ar[26]={0};
        for(int i = 0; i < len; i ++)ar[str[i]-'a'] = 1;
        for(int i = 0; i < 26; i++)
            if(ar[i] != 0)cnt++;
        cout << cnt << endl;
 }
 return 0;
}
