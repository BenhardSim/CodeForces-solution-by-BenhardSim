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
	vi num(n);
	LL maxv=0;
	fo(i,n){
		cin >> num[i];
		maxv = max(maxv,num[i]);
	}
	set<LL> psb;
	fo(i,n)psb.insert(num[i]);
	if(k < psb.size()){
		cout << "-1\n";
		return;	
	}
	cout << n*k << "\n";
	for(LL i=0;i<n;i++){
		for(auto j : psb){
			cout << j << " ";
		}
		for(LL o=0;o<((int)k-psb.size());o++){
			cout << 1 << " ";
		}
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
