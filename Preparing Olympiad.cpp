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

/*codeForce Round : #306 (Div. 2)*/

void solve(){
	
	LL n,l,r,x;
	cin >> n >> l >> r >> x;
	vi num;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	LL total=0;
	/*looking all permutation*/
	for(int mask=0;mask<(1<<n);mask++){
		LL sum =0 ;
		LL minv = INF;
		LL maxv = 0;
		LL count = 0;
		for(int i=0;i<n;i++){
			if((mask >> i)&1){
				count++;
				sum+=num[i];
				maxv = max(maxv,num[i]);
				minv = min(minv,num[i]);
			}
		}
		if(count >= 2 && sum <= r && sum >= l && (maxv-minv)>= x){
			total++;
		}
	}
	cout << total;

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
//	cin >> t;
	while(t--)solve();
	return 0;
}
