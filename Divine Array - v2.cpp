/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
#define INF 1e10+7
#define __gcd gcd
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

LL sumPairs(vi num,LL n,LL target){
	map<LL,LL> pairs;
	LL count=0;
	for(LL i=0;i<n;i++){
		/*search if the complement exist inside the map*/
		if(pairs.find(target-num[i]) != pairs.end()){
			/*put all the total element into a variable*/
			count+=pairs[target-num[i]];
		}
		pairs[num[i]]++;
	}
	return count;
}

/*codeForce Round : # (Div. )*/

void solve(){
	
	LL n;
	cin >> n;
	vi num;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	
	LL idx=0;
	
	/*add to the array*/
	vector<vi> res;
	res.pb(num);
	
	while(idx<=n){
		map<LL,LL> dic;
		/*count the frequency*/
		for(LL i=0;i<num.size();i++)dic[num[i]]++;
		LL c=0;
		/*change the array*/
		for(LL i=0;i<num.size();i++)num[i]=dic[num[i]];
		/*add the change*/
		res.pb(num);
		/*increase index*/
		idx++;
	}
	
	vi res2;
	LL q;
	cin >> q;
	while(q--){
		LL x,k;
		cin >> x >> k;
		if(k>=n)k=n;
		res2.pb(res[k][x-1]);
	}
	for(LL i=0;i<res2.size();i++){
		cout << res2[i] << "\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
