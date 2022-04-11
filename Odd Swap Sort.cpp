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
	vi num,even,odd;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	for(LL i=0;i<n;i++){
		if(num[i]%2==0)even.pb(num[i]);
		else odd.pb(num[i]);
	}
	for(LL i=0;i<odd.size()-1 && odd.size()!=0;i++){
		if(odd[i] > odd[i+1]){
			cout << "NO\n";
			return;
		}
	}
	
	for(LL i=0;i<even.size()-1 && even.size()!=0;i++){
		if(even[i] > even[i+1]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
