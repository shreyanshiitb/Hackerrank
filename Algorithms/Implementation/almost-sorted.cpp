#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define FOR(it, c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define SZ(c) ((int)(c).size())
typedef long long LL;

const int N = 1000005;
int stack[N], top=0;
int left[N], right[N];
int a[N], n;
vector<int> r[N];
int bit[N];

void add(int x, int v) {
  while(x<=n) { bit[x] += v; x += (x&-x); }
}
int ask(int x) {
  int ret=0;
  while(x) { ret += bit[x]; x -= (x&-x); }
  return ret;
}

int main(void) {
  scanf("%d", &n);
  for(int i=1;i<=n;i++) scanf("%d", &a[i]);
  for(int i=1;i<=n;i++) {
    while(top>0 && a[i] > a[stack[top-1]]) --top;
    left[i] = top? stack[top-1] : 0;
    stack[top++] = i;
  }
  top = 0;
  for(int i=n;i>=1;i--) {
    while(top>0 && a[i] < a[stack[top-1]]) --top;
    right[i] = top? stack[top-1] : n+1;
    stack[top++] = i;
  }
  LL ans = 0;
  for(int L=n;L>=1;L--) {
    FOR(it, r[L]) add(*it, -1);
    add(L, 1);
    r[left[L]].push_back(L);
    ans += ask(right[L]-1);
  }
  printf("%lld
", ans);
  return 0;
}

