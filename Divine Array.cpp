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
	vi num,mapa(n+1),mapb(n+1);
	for(LL i=0;i<=mapa.size();i++){
		mapa[i] = 0;
	}
	vector<vi> res;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >>  temp;
		mapa[temp]++;
		num.pb(temp);
	}
	LL total=0;

	
	/*insert val*/
	
	while(total<n){
		LL ck=0;
		/*cek if the key value pair already the same*/
		for(LL i=1;i<=mapa.size();i++){
			if(mapa[i] == i)ck = 1;
			else{
//				cout <<mapa[i] << " " << i << "\n";
				ck=0;
//				break;
			}
		}
		if(ck == 1)break;
		
		/*add to table*/
		for(LL i=0;i<n;i++){
			num[i] = mapa[num[i]];
		}
		res.pb(num);
		total++;
		/*empty the map*/
		for(LL i=0;i<=mapa.size();i++){
			mapa[i] = 0;
		}
		/*iterarte again*/
		for(LL i=0;i<n;i++){
			mapa[num[i]]++;
		}
	}
	
	vi res2;
	LL x,k,q;
	cin >> q;
	while(q--){
		cin >> x >> k;
		if(k>n)k=n;
		res2.pb(res[k][x]);
	}
	for(LL i=0;i<res2.size();i++){
		cout << res2[i] << "\n";
	}

	
//	
//	for(LL i=0;i<res.size();i++){
//		for(LL j=0;j<num.size();j++){
//			cout << res[i][j] << " "; 
//		}
//		cout << "\n";
//	}
//	cout << total << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
