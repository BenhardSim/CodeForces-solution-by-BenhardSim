/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

void solve(){
	LL n;
	set<pair<LL,LL>> pairs,visited;
	cin >> n;
	for(LL i=0;i<n;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		pairs.insert(make_pair(temp1,temp2));
	}
	
	for(auto j : pairs){
		
		if(visited.count(j) > 0)continue;
		
		stack<pair<LL,LL>> stk;
		pair<LL,LL> current;
		stk.push(j);
		
		while(stk.size() > 0){
			current = stk.top();
			stk.pop();
			visited.insert(current);
			
			if(current.first==current.second){
				cout << current.first << " " << current.second << " " << current.first << "\n";
				continue;
			}
			
			for(LL i = current.first; i<=current.second;i++){
				pair<LL,LL> fpair = make_pair(-1,-1),spair = make_pair(-1,-1);
				bool vis = false;
				if(current.first == current.second){
					fpair = make_pair(current.first,current.second);
					spair = make_pair(current.first,current.second);
				}
				else if(i == current.first){
//					fpair = make_pair(i,i);
					spair = make_pair(i+1,current.second);
				}else if(i == current.second){
					fpair = make_pair(current.first,i-1);
//					spair = make_pair(i,i);
				}else{
					fpair = make_pair(current.first,i-1);
					spair = make_pair(i+1,current.second);
				}
				
				if(pairs.count(fpair) == 1){
					if(visited.count(fpair) == 0){
						stk.push(fpair);
						vis = true;
					}
				}
				
				if(pairs.count(spair) == 1){
					if(visited.count(spair) == 0){
						stk.push(spair);
						vis = true;
					}
				}
				
				cout << "\n\nfirst pair : " << fpair.first << " " << fpair.second << "\n";
				cout << "second pair : " << spair.first  << " " << spair.second << "\n\n";
				
				if(vis || visited.count(fpair) > 0 || visited.count(spair) > 0){
					cout << current.first << " " << current.second << " " << i << "\n";
//					break;
				}
			}
		}
	}
	
}

int main(){
	
	LL t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
