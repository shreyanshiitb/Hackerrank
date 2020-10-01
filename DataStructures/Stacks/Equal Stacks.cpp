#include <bits/stdc++.h>

using namespace std;

#define ll long long

void showStack(stack<int> x) {
    while (!x.empty()) {
        cout << x.top() << " ";
        x.pop();
    }
    cout << '\n';
}


int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    int s1 = 0, s2 = 0, s3 = 0;
    for (int i = h1.size() - 1; i >= 0; i--) {
        s1 += h1[i];
        st1.push(s1);
    }

    for (int i = h2.size() - 1; i >= 0; i--) {
        s2 += h2[i];
        st2.push(s2);
    }

    for (int i = h3.size() - 1; i >= 0; i--) {
        s3 += h3[i];
        st3.push(s3);
    }

    int ans = 0;

    while (!st1.empty() && !st2.empty() && !st3.empty()) {

        if (st2.top() > st1.top()) {
            st2.pop();
            if (st2.empty()) {
                break;
            }
        }

        if (st3.top() > st1.top()) {
            st3.pop();
            if (st3.empty()) {
                break;
            }
        }

        if (st1.top() == st2.top() && st2.top() == st3.top()) {
            ans = st1.top();
            break;
        }
        if (st1.top() > st2.top() || st1.top() > st3.top()) {
            st1.pop();
            if (st1.empty()) {
                break;
            }
        }
    }

    return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for (int i = 0; i < n1; i++) {
        int x; cin >> x;
        v1.push_back(x);
    }

    for (int i = 0; i < n2; i++) {
        int x; cin >> x;
        v2.push_back(x);
    }

    for (int i = 0; i < n3; i++) {
        int x; cin >> x;
        v3.push_back(x);
    }

    cout << equalStacks(v1, v2, v3);

}
