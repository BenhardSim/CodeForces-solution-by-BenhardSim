/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

void solve(){
	LL n;
	cin >> n;
	set<pair<LL,LL>> pairs;
	for(LL i=0;i<n;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		pairs.insert(make_pair(temp1,temp2));
	}
	
	for(auto j : pairs){
		LL nodeA = j.first;
		LL nodeB = j.second;
		for(LL i=nodeA ; i<=nodeB ;i++){
			LL a = nodeA;
			LL b = i-1;
			LL c = i+1;
			LL d = nodeB;
			if((a > b || pairs.count(make_pair(a,b)) == 1) && (c > d || pairs.count(make_pair(c,d)) == 1)){
				cout << nodeA << " " << nodeB << " " << i << "\n";
				break;
 			}
		}
	}
}



int main(){
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	
	return 0;
}
