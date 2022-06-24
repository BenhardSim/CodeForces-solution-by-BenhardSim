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

	LL a,s;
	cin >> a >> s;
	LL a1,s1,p=1;
	vi res;
	while(a>0){
		a1=a%10;
		s1=s%10;
		if(s1 >= a1)res.pb(s1-a1);
		else{
			s/=10;
			s1 += (s%10)*10;
			res.pb(s1-a1);
		}
		
		if(a1 > s1 || s1-a1>9){
			cout << "-1\n";
			return;
		}
		a/=10;
		s/=10;
		p*=10;
	}
	LL tot=0;
	for(LL i=0;i<res.size();i++)tot+=res[i]*pow(10,i);
	tot+=s*p;
	cout << tot << "\n";

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
