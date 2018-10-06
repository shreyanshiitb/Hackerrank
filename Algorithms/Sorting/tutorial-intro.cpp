#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    
    int a,v, n,pos = 0;
    cin >> v >> n;
    for(int i = 0; i < n; i ++){
        cin >> a;
        if(a == v){
            cout << pos << endl;
            return 0;
        }
        pos++;
    }
    return 0;
}
