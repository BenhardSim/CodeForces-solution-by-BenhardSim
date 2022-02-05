/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*codeForce Round : # (Div. )*/

void solve(){
	string str;
	cin >> str;
	LL last = str[str.length()-1]-'0';
	LL first = str[0]-'0';
	if(last%2 == 0)cout << "0\n";
	else if(last%2 != 0 && first%2 == 0)cout << "1\n";
	else if(last%2 != 0 && first%2 != 0 && str.length()>=3){
		for(LL i=1;i<str.length()-1;i++){
			if((str[i]-'0')%2 == 0){
				cout << "2\n";
				return;
			}
		}
		cout << "-1\n";
	}
	else cout << "-1\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
