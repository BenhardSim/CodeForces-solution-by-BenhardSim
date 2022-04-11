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

	vector<pair<LL,LL>> pt(3);
	fo(i,3){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		pt[i]={temp1,temp2};
	}
	if(pt[0].s-pt[1].s == 0 && pt[2].s < pt[0].s){
		cout << abs(pt[0].f-pt[1].f) << "\n";
		return;
	}
	
	if(pt[1].s-pt[2].s == 0 && pt[0].s < pt[1].s){
		cout << abs(pt[1].f-pt[2].f) << "\n";
		return;
	}
	
	if(pt[0].s-pt[2].s == 0 && pt[1].s < pt[0].s){
		cout << abs(pt[0].f-pt[2].f) << "\n";
		return;
	}
	cout << 0 << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
