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

	LL n;
	cin >> n;
	vi num(n+1);
	for(LL i=1;i<=n;i++)cin >> num[i];
	map<LL,LL> freq;
	for(LL i=1;i<=n;i++){
		freq[num[i]]++;
	}
	for(auto j:freq){
		if(j.s==1){
			cout << "-1\n";
			return;
		}
	}
	LL tot=0;
	LL i=1;
	for(auto j:freq){
		cout << j.s+tot << " ";
		while(i<j.s+tot){
			cout << i << " ";
			i++;
		}
		tot+=j.s;
		i=tot+1;
	}
	
	cout << "\n";	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


