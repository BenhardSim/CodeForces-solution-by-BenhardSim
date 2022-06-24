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

	LL n,k;
	cin >> n >> k;
	vi num;
	map<LL,LL> freq;
	fo(i,n){
		LL temp;
		cin >> temp;
		freq[temp]++;
	}
	for(auto j:freq){
		if(j.s >= k)num.pb(j.f);
	}
	set<LL> vis;
	LL l=0,r=0,al=0,ar=0;
	LL maxv=-1;
	
	if(num.size()==0){
		cout << "-1\n";
		return;
	}
	
	if(num.size()==1){
		cout << num[0] << " " << num[0] << "\n";
		return;
	}
	
	for(LL i=1;i<num.size();i++){
		if(num[i]-num[i-1]==1){
			r=i;
			if(r-l>maxv){
				maxv=r-l;
				ar=r;
				al=l;
			}
		}else{
			l=i;
		}
	}
	
	cout << num[al] << " " << num[ar] << "\n";

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
