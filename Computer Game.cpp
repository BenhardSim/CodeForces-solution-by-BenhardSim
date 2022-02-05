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
	LL n;
	string s;
	vector<string> grid;
	set<pair<LL,LL>> blc;
	cin >> n;
	for(LL i=1;i<=2;i++){	
		string temp;
		cin >> temp;
		grid.pb(temp);
	}
	for(LL i=0;i<2;i++){	
		for(LL j=0;j<n;j++){
			if(grid[i][j]=='1')blc.insert({i+1,j+1});
		}
	}
	LL cek=1;
	for(ii j:blc){
		if(j.f == 1){
			/*cek bawah*/
			if(blc.count({j.f+1,j.s}) > 0){
				cout << "NO\n";
				return;
			}/*cek tembok kiri*/
			else if(blc.count({j.f,j.s-1}) > 0 && blc.count({j.f+1,j.s-1}) > 0){
				cout << "NO\n";
				return;
			}
			/*cek tembok kanan*/
			else if(blc.count({j.f,j.s+1}) > 0 && blc.count({j.f+1,j.s+1}) > 0){
				cout << "NO\n";
				return;
			}
		}
		else if(j.f==2){
		/*cek atas*/
			if(blc.count({j.f-1,j.s}) > 0){
				cout << "NO\n";
				return;
			}/*cek tembok kiri*/
			else if(blc.count({j.f,j.s-1}) > 0 && blc.count({j.f-1,j.s-1}) > 0){
				cout << "NO\n";
				return;
			}
			/*cek tembok kanan*/
			else if(blc.count({j.f,j.s+1}) > 0 && blc.count({j.f-1,j.s+1}) > 0){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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
