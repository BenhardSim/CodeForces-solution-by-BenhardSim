/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;


/*codeForce Round : # (Div. )*/

void solve(){
	LL n,k;
	cin >> n >> k;
	vi nums(n+1),res;
	for(LL i=0;i<k;i++){
		LL temp;
		cin >> temp;
		nums[temp]++;
	}
	sort(nums.begin(),nums.end(),greater<>());
	LL total=0,count=0,i=1;
	while(i<n){
		if(nums[i] > 0){
			total+=(n-i);
			res.pb(total);
			nums[i]--;
		}else i++;
	}
	for(LL i=0;i<res.size();i++){
		if(res[i] >= n)count++;
	}
	cout << count << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
