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
#define INF 10e18+7
#define __gcd gcd
#define PI 3.14159265
#define __builtin_popcountll bpl
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

void solve(){

	LL n;
	cin >> n;
	vi num(n),temp(n);
	fo(i,n)cin >> num[i];
	ull res=INF;	
	for(LL i=0;i<n;i++){
		ull tot=0;
		fo(j,n)temp[j]=num[j];
		temp[i]=0;
		for(LL j=i+1;j<n;j++){
			if(temp[j-1] >= temp[j]){
				LL mul=temp[j-1]/temp[j] + 1;
				tot+=mul;
				temp[j]*=mul;
			}else tot++;
		}
		
		for(LL j=i;j>=1;j--){
			if(-temp[j-1] >= -temp[j]){
				LL mul=temp[j]/temp[j-1] + 1;
				tot+=mul;
				temp[j-1]*=mul;
			}else tot++;
		}
		res=min(res,tot);

	}
	
	cout << res << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	while(t--)solve();
	return 0;
}
