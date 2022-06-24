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
#define INF 10e9+7
#define PI 3.14159265
#define bpl __builtin_popcountll
#define gcd __gcd 
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

void solve(){

	LL n=8;
//	cin >> n;
	char grid[8][8];
	for(LL i=0;i<n;i++){
		for(LL j=0;j<n;j++){
			cin >> grid[i][j];
		}
	}
	LL x=0,y=0;
	for(LL i=0;i<n;i++){
		LL cnt=0,idx=-1,prev;
		for(LL j=0;j<n;j++){
			if(grid[i][j]=='#'){
				cnt++;
				prev=idx;
				idx=j;
			}
		}
		if(cnt==2){
			LL res=((prev+1)+(idx+1))/2;
			x=res;
			break;
		}
	}
	for(LL i=0;i<n;i++){
		LL cnt=0,idx=-1,prev;
		for(LL j=0;j<n;j++){
			if(grid[j][i]=='#'){
				prev=idx;
				cnt++;
				idx=j;
			}
		}
		if(cnt==2){
			LL res=((prev+1)+(idx+1))/2;
			y=res;
			break;
		}
	}
	
	cout << y << " " << x << "\n";
	

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


