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
#define INF 10e10+7
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
	string s1,s2;
	cin >> s1 >> s2;
	LL tot=0;
	vi res;
		for(LL i=0;i<n;i++){
			if(s1[i]!=s2[i]){
				tot+=3;
				res.pb(i+1);
				/*flip 1*/
				for(LL j=0;j<=i;j++){
					if(s1[j]=='0')s1[j]='1';
					else s1[j]='0';
				}
				reverse(s1.begin(),s1.begin()+i);
				/*flip 2*/
				res.pb(1);
				if(s1[0]=='0')s1[0]='1';
				else s1[0]='0';
				/*flip 3*/
				res.pb(i+1);
				for(LL j=0;j<=i;j++){
					if(s1[j]=='0')s1[j]='1';
					else s1[j]='0';
				}
				reverse(s1.begin(),s1.begin()+i);
			}
		}
		
	cout << tot << " ";
	for(auto j:res)cout << j << " ";
	cout << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
