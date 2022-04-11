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
#define __gcd
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

bool isOne(int mask, int i){
	/*
		cek if binary mask at index i is equal to one 
		ex : mask = 9 -> (1001) and i = 3
		that means is the binary at index i=3 is equal to one ?
		and the answer is yes
		binary 	: 1 0 0 1
		index	: 3 2 1 0
	*/
	return (mask>>i)&1 == 1;
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
	vector<pair<LL,LL>> num;
	vi inp(n+1);
	for(LL i=1;i<=n;i++){
		cin >> inp[i];
	}
	for(LL i=1;i<=n;i++){
		if(inp[i] >= i)num.pb(mp(i,inp[i]));
	}
	LL count=1;
	for(LL i=0;i<num.size()-1;i++){
		if(num[i].s >= num[i+1].f){
			num[i].f = min(num[i].f,num[i+1].f);
			num[i].s = max(num[i].s,num[i+1].s);
			num[i+1].f = min(num[i].f,num[i+1].f);
			num[i+1].s = max(num[i].s,num[i+1].s);
		}else count++;
	}
	cout << count << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
