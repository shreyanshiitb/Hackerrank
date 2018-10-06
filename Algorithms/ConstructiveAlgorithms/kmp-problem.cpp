#include <iostream>
#include <functional>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

#define INF 0x3fffffff
#define repp(i, n, m) for (int i = n; i <= m; i++)
#define rep(i, n, m) for (int i = n; i < m; i++)
#define sa(n) scanf("%d", &(n))
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

const int maxn = 1e6 + 5;
const ll mod = 1000000;
const double PI = acos(-1.0);

vector< pair <int, char> > v;

bool cmp(const pair<int, char>&a, const pair<int, char>&b)
{
	return a.ss < b.ss;
}

void solve()
{
	int i, j, k;
	rep(i, 0, 26)
	{
		sa(k);
		if (k == 0)continue;
		v.pb(mp(k, i + 'a'));
	}
	sort(v.begin(), v.end());
	sort(v.begin() + 1, v.end(), cmp);
	if (v.size() == 1)
	{
		rep(i, 0, v[0].ff)
		{
			printf("%c", v[0].ss);
		}
		printf("
");
		return;
	}
	int le = 0, ri = 1;
	//buf[cur++] = v[le].ss, v[le].ff--;
	printf("%c", v[le].ss);
	v[le].ff--;
	if (v[le].ss > v[ri].ss)
	{
		sort(v.begin(), v.end(), cmp);
		rep(i, 0, v.size())
		{
			rep(j, 0, v[i].ff)
			{
				printf("%c", v[i].ss);
			}
		}
		printf("
");
	}
	else
	{
		while (ri < v.size())
		{
			if (v[le].ff)
			{
				v[le].ff--;
				printf("%c", v[le].ss);
			}
			if (v[ri].ff)
			{
				v[ri].ff--;
				printf("%c", v[ri].ss);
				if (v[ri].ff == 0)
				{
					ri++;
				}
			}
		}
	}
}

int main()
{
#ifndef ONLINE_JUDGE  
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
	solve();
	return 0;
}
