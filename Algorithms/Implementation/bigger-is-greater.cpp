#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000000
using namespace std;
 
 
int main() {
    int n;
    char s[MAX];
    cin>>n;
    while(n--)
        {
        cin>>s;
        int len;
        len=strlen(s);
        if(next_permutation(s,s+len))
            cout<<s<<endl;
        else
            cout<<"no answer"<<endl;
    }
    return 0;
}
