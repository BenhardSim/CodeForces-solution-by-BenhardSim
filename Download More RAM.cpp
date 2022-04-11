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

/*codeForce Round : #767 (Div. 2)*/

void solve(){
	LL n,k;
	cin >> n >> k;
	vi arra,arrb;
	vector<ii> pairs;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >>  temp;
		arra.pb(temp);
	}
	for(LL i=0;i<n;i++){
		LL temp;
		cin >>  temp;
		arrb.pb(temp);
	}
	for(LL i=0;i<n;i++){
		pairs.pb(mp(arra[i],arrb[i]));
	}
	sort(pairs.begin(),pairs.end());
	LL total=k;
	for(LL i=0;i<pairs.size();i++){
		if(pairs[i].f <= total)total+=pairs[i].s;
	}
	cout << total << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
