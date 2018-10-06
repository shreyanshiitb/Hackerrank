#include <bits/stdc++.h>
using namespace std;

int main() {

 string str;
 int cnt = 1;
 cin >> str;
 int len = str.length();
 for(int i = 0; i < len; i++){
        if(str[i]>= 65 && str[i] <= 90)cnt++;
 }
 cout << cnt << endl;
 return 0;
}
