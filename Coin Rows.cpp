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
#define INF 10e10+7
#define __gcd gcd
#define PI 3.14159265
#define __builtin_popcountll bpl
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

bool isOne(int mask, int i){
	/*
		check if binary mask at index i is equal to one 
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
	vi g1(n),g2(n);
	fo(i,n)cin >> g1[i];
	fo(i,n)cin >> g2[i];
	if(n==1){
		cout << "0\n";
		return;
	}
	for(LL i=1;i<n;i++){
		g2[i]+=g2[i-1];
	}
	for(LL i=n-2;i>=0;i--){
		g1[i]+=g1[i+1];
	}
	LL sum1=0,sum2=0,res=INF;
	for(LL i=0;i<n;i++){
		if(i == n-1)sum1=0;
		if(i == 0)sum2=0;
		if(i < n-1)sum1=g1[i+1];
		if(i > 0)sum2=g2[i-1];
		res=min(res,max(sum1,sum2));
	}
	
	cout << res << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
