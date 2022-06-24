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
#define __builtin_popcountll bpl
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

	string s;
	cin >> s;
	LL len=s.length();
	map<char,vi> freq;
	for(LL i=0;i<len;i++){
		freq[s[i]].pb(i);
	}
	if(freq.size() == len || freq.size() == 1){
		cout << "YES\n";
		return;
	}
	LL idx1=-1,idx2=-1,minv=INF;
	for(auto j:freq){
		if(j.s.size() >= 2){
			sort(j.s.begin(),j.s.end());
			if(j.s[1]-j.s[0] < minv){
				idx1=j.s[0];
				idx2=j.s[1];
				minv=j.s[1]-j.s[0];
			}
		}
	}

		set<char> here;
		for(LL i=idx1;i<=idx2;i++){
			here.insert(s[i]);
		}
		map <char,LL> ans;
		for(LL i=0;i<len;i++){
			if(here.count(s[i]) == 0){
				ans[s[i]]++;
			}
		}
		for(auto j : ans){
			if(j.s >= 2)
		}
	
	cout << "YES\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
