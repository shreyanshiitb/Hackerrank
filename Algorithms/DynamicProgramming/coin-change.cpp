#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m;
ll a[55];
ll memo[55][555];

ll dp(ll idx,ll val){
	if (!val) return 1;	
	if (val < 0) return 0;
	if (idx == m) return 0;
	
	
	ll &ret = memo[idx][val];
	if (ret != -1) return ret;

	ret = dp(idx,val-a[idx]) + dp(idx+1,val);
	
	return ret;
}

int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin>>n>>m;
	for (int i=0;i<m;i++) cin>>a[i];
	memset(memo,-1,sizeof memo);
	
	cout<<dp(0,n)<<endl;	
}
