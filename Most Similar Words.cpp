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

	LL n,m;
	cin >> n >> m;
	vector<string> words(n);
	for(LL i=0;i<n;i++){
		cin >> words[i];
	}
	LL res=INF;
	for(LL i=0;i<n;i++){
		for(LL j=0;j<n;j++){
			if(i!=j){
				string s1 = words[i];
				string s2 = words[j];
				LL tot=0;
				for(LL o=0;o<m;o++){
					LL temp=abs((int)(words[i][o])-(int)(words[j][o]));
					tot+=temp;
				}
				res=min(tot,res);
		}
			}
			
	}
	
	cout << res << "\n";

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
