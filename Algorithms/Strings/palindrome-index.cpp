#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    string tmp = str;
    bool OK = true;
    reverse(tmp.begin(),tmp.end());
    for(int i = 0; i < str.size(); i++){
        if(str[i] != tmp[i]){
            OK = false;
            break;
        }
    }
    return OK;
}
string conCat(string str,int index){
    string tmp;
    for(int i = 0; i < str.size();i++){
        if(i != index)tmp.push_back(str[i]);
    }
    return tmp;
}
int main(){

    int T;
    string str;
    cin >> T;
    for(int t = 0; t < T; t++){

        cin >> str;
        if(checkPalindrome(str)){
            cout << -1 << endl;
            continue;
        }
        int index = -1,len = str.size();
        for(int i = 0; i < len/2; i++){
            if(str[i] != str[len-i-1]){
                if(checkPalindrome(conCat(str,i)))index = i;
                if(checkPalindrome(conCat(str,len-i-1)))index = len-i-1;
                break;
            }
        }
        cout << index << endl;
    }
    return 0;
}
