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

/*
5 5
1 2 3 4 5
1 1 5
2 10
1 5 11
1 4 1
2 1
*/

void solve(){

	LL n,q,tot=0;
	cin >> n >> q;
	vi num(n);
	fo(i,n)cin >> num[i];
	fo(i,n)tot+=num[i];
	LL k=-1;
	set<LL> vis;
	while(q--){
		LL t,i;
		cin >> t;
		if(t==1){
			LL i,x;
			cin >> i >> x;
			if(k!=-1&&!vis.count(i)){
				tot=tot-k+x;
				vis.insert(i);
				num[i-1]=x;
			}else{
				tot=tot-num[i-1]+x;
				num[i-1]=x;
			}
			
		}else{
			LL x;
			cin >> x;
			tot=x*n;
			vis.clear();
			k=x;
		}
		cout << tot << "\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	while(t--)solve();
	return 0;
}


