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
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

/*codeForce Round : #115 (Div. 2)*/

void solve(){
	LL n,si=0;
	cin >> n;
	vector<vi> grid;
	for(LL i=0;i<n;i++){
		vi row;
		for(LL i=0;i<5;i++){
			LL temp;
			cin >> temp;
			row.pb(temp);
		}
		grid.pb(row);
	}
	string ans="NO";
	/*day permutation*/
	/*day one*/
	for(LL i=0;i<5;i++){
		/*day two*/
		for(LL j=i+1;j<5;j++){
			LL dA = 0;
			LL dB = 0;
			LL both = 0;
			/*availableness of each person*/
			for(LL k=0;k<n;k++){
				if(grid[k][i] == 1)dA++;
				if(grid[k][j] == 1)dB++;
				if(grid[k][i] == 0 && grid[k][j] == 0)both++;
			}
			if(dA >= n/2 && dB >= n/2 && both == 0){
				ans = "YES";
			}
		}
	}
	cout << ans << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
