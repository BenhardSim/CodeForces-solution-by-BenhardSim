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
	vi num(n+1),res,res2;
	for(LL i=1;i<=n;i++){
		cin >> num[i];
	}
	sort(num.begin(),num.end());
	LL l=1,r=n,i=0;
	while(l<=r && i<=n){
		if(i%2!=0){
			res.pb(num[l]);
			l++;
		}else if(i%2==0){
			res.pb(num[r]);
			r--;
		}
		i++;
	}
	l=1,r=n,i=0;
	while(l<=r && i<=n){
		if(i%2!=0){
			res2.pb(num[r]);
			r++;
		}else if(i%2==0){
			res2.pb(num[l]);
			l--;
		}
		i++;
	}
	LL tot=0,tot1=0;
	for(LL i=1;i<res.size()-1;i++){
		if(res[i] < res[i-1] && res[i] < res[i+1])tot++;
		if(res2[i] < res2[i-1] && res2[i] < res2[i+1])tot1++;
	}
	
	cout << max(tot,tot1) << "\n";
	if(tot >= tot1){
		for(LL i=0;i<res.size();i++){
			cout << res[i] << " ";
		}
	}else if(tot < tot1){
		for(LL i=0;i<res2.size();i++){
			cout << res2[i] << " ";
		}
	}
	
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
//	cin >> t;
	while(t--)solve();
	return 0;
}
