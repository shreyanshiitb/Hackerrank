#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int numSpecialProblems(vector<int> &t, vector<int> &numPagesForChapter, int n, int k) {
    int pageNum=1, special=0;
    for(int i=1; i <= n; i++) {
        for(int c=1; c <= numPagesForChapter[i]; c++) {
            if(pageNum >= ((c-1)*k+1) && pageNum <= min(c*k, t[i]))
                special++;
            pageNum++;
        }
    }
    return special;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n >> k;
    vector<int> t(n+1), numPagesForChapter(n+1);
    for(int i=1; i <= n; i++) cin >> t[i];
    for(int i=1; i <=n; i++) numPagesForChapter[i] = ceil((float)t[i]/k);
    cout << numSpecialProblems(t, numPagesForChapter, n, k);
    return 0;
}
