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

	LL n,m;
	cin >> n >> m;
	char grid[n+1][m+1];

	
	for(LL i=1;i<=n;i++){
		for(LL j=1;j<=m;j++){
			cin >> grid[i][j];
		}
	}
	vector<pair<ii,ii>> pos,pos2;
	
	if(grid[1][1] == '1'){
		cout << -1 << "\n";
		return;
	}
	set<ii> visited;
	/*iterate thorgh each row*/
	for(LL i=1;i<=n;i++){
		ii temp1={-1,-1};
		ii temp2={-1,-1};
		for(LL j=m;j>=2;j--){
			/*check for even indicies*/
			if(grid[i][j] == '1'){
				temp1={i,j-1};
				temp2={i,j};
				pos.pb(mp(temp1,temp2));
				visited.insert(temp2);
			}
		}
	}
	
	/*itarate through each col*/
	for(LL i=1;i<=m;i++){
		ii temp1={-1,-1};
		ii temp2={-1,-1};
		for(LL j=n;j>=2;j--){
			/*check for even indicies*/
			if(grid[j][i] == '1' && visited.count({j,i}) == 0){
				temp1={j-1,i};
				temp2={j,i};
				pos2.pb(mp(temp1,temp2));
			}
		}
	}
	
	cout << pos.size() + pos2.size() << "\n";
	for(LL i=0;i<pos.size();i++){
		cout << pos[i].f.f << " " << pos[i].f.s << " " << pos[i].s.f << " " << pos[i].s.s << "\n";
	}
	for(LL i=0;i<pos2.size();i++){
		cout << pos2[i].f.f << " " << pos2[i].f.s << " " << pos2[i].s.f << " " << pos2[i].s.s << "\n";
	}
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
