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
	LL n,m,r,c,tot;
	cin >> n >> m >> r >> c;
	vector<string> grid;
	for(LL i=0;i<n;i++){
		string temp;
		cin >> temp;
		grid.pb(temp);
	}
	vector<ii> colpos,rowpos;
	LL countc=0,countr=0;
	if(grid[r-1][c-1] == 'B'){
		cout << 0 << "\n";
		return;
	}
	/*search row*/
	for(LL i=0;i<m;i++){
		if(grid[r-1][i] == 'B'){
			cout << 1 << "\n";
			return;
		}
	}
	/*search col*/
	for(LL i=0;i<n;i++){
		if(grid[i][c-1] == 'B'){
			cout << 1 << "\n";
			return;
		}
	}
	
	for(LL i=0;i<n;i++){
		for(LL j=0;j<m;j++){
			if(grid[i][j] == 'B'){
				cout << 2 << "\n";
				return;
			}
		}
	}
	cout << -1 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
