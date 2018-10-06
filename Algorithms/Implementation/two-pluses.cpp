#include <iostream>
#include <vector>
#define repeat(i,n) for (int i = 0; (i) < (n); ++(i))
typedef long long ll;
using namespace std;
const int dy[] = { -1, 1, 0, 0 };
const int dx[] = { 0, 0, 1, -1 };
int area(int l) { return 4*l+1; }
int value(int y, int x, int l1, int l2) {
    if (y > x) swap(y, x);
    int ans = 0;
    if (y == 0) {
        repeat (t,x) {
            ans = max(ans, area(min(t,l1)) * area(min(x-t-1,l2)));
        }
    } else {
        repeat (t,l1+1) {
            int u =
                t < y ? l2 :
                t < x ? min(x-1, l2) :
                        min(y-1, l2);
            ans = max(ans, area(t) * area(u));
        }
    }
    return ans;
}
int main() {
    int h, w; cin >> h >> w;
    vector<vector<bool> > is_good(h, vector<bool>(w));
    repeat (y,h) repeat (x,w) {
        char c; cin >> c;
        is_good[y][x] = c == 'G';
    }
    auto is_on_field = [=](int y, int x) { return 0 <= y and y < h and 0 <= x and x < w; };
    vector<vector<int> > l(h, vector<int>(w)); // possible length of 4 bars
    repeat (y,h) repeat (x,w) {
        while (true) {
            bool valid = true;
            repeat (i,4) {
                int ny = y + l[y][x] * dy[i];
                int nx = x + l[y][x] * dx[i];
                if (not is_on_field(ny, nx) or not is_good[ny][nx]) {
                    valid = false;
                    break;
                }
            }
            if (not valid) break;
            ++ l[y][x];
        }
    }
    int ans = 0;
    repeat (y1,h) repeat (x1,w) if (l[y1][x1]) {
        repeat (y2,h) repeat (x2,w) if (l[y2][x2]) {
            if (y1 != y2 or x1 != x2) {
                ans = max(ans, value(abs(y1-y2), abs(x1-x2), l[y1][x1]-1, l[y2][x2]-1));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
