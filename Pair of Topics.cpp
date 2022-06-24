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
	vi a(n),b(n),c(n);
	fo(i,n)cin >> a[i];
	fo(i,n)cin >> b[i];
	fo(i,n)c[i] = a[i]-b[i];	
	sort(c.begin(),c.end());
	
	LL l=0,r=n-1,res=0;
	/*two pointer*/
	while(l<r){
		if(c[l]+c[r]<=0){
			l++;
		}else if(c[l]+c[r]>0){
			res+=(r-l);
			r--;
		}
	}
	
	cout << res << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	while(t--)solve();
	return 0;
}


