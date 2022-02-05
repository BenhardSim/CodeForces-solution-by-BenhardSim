/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

void val(){
	LL n;
	cin >> n;
	vector<LL> num;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	unordered_set <LL> visited;
	for(LL i=0;i<n;i++){
		while(num[i] > 0){
			if(num[i] <= n && visited.count(num[i]) == 0){
				visited.insert(num[i]);
				break;
			}else{
				num[i] = num[i]/2;
			}
		}
	}
	
	for(LL i=1;i<=n;i++){
		if(visited.count(i) == 0){
			cout << "NO" << "\n";
			return;
		}
	}
	
	cout << "YES" << "\n";
}

int main(){
	
	LL q;
	cin >> q;
	while(q--){
		val() ;
	}
	
	return 0;
}
