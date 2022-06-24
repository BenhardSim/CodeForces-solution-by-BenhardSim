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

	LL tot=0;
	string n;
	cin >> n;
	LL in = stoi(n),len = n.length();
	string num;
	for(LL i=0;i<len;i++){
		num+='1';
	}
	LL val;
	if(num.length() > 0)val = stoi(num);
	if(in <= 9){
		cout << in << "\n";
	}else if(in >= 10 && in <=100){
		LL res = in/11;
		cout << 9 + res << "\n";
	}else{
		LL res = 18 + in/val;
		cout << res << "\n";
	}

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
