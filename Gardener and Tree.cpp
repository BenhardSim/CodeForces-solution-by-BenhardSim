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
	
	LL n,k;
	cin >> n >> k;
	vector<vi> dic(n+1),itr(n+1);
	for(LL i=1;i<n-1;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		dic[temp1].pb(temp2);
	}
	LL current,total=1;
	set<LL> visited;
	for(LL i=0;i<k;i++){
		/*get into a node that is not a leaf*/
		for(LL i=1;i<=dic.size();i++){
			if(dic[i].size() > 0){
				/*dic[i] will be the root*/
				/*do BFS from dic[i]*/
				
				queue<LL>que;
				LL current;
				que.push(dic[i]);
				while(que.size()>0){
					current = que.front();
					que.pop();
					for(LL i=0;i<current.size();i++){
						
						if(visited.count(current[i]) > 0){
							itr[current] = total;
						}
						
						if(visited.count(current[i]) == 0){
							que.push(current[i]);
						}
					}
					
				}
			}else continue;
		}
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
