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
	map<char,LL> numMap;
	char beg='a';
	for(LL i=1;i<=26;i++){
		numMap[beg]=i;
		beg++;
	}
//	for(auto j : numMap){
//		cout << j.f << " " << j.s << "\n";
//	}
	LL len=s.length();
	if(len%2==0){
		LL tot=0;
		for(LL i=0;i<len;i++){
			tot+=numMap[s[i]];
		}
		cout << "Alice " << tot << "\n";
	}else{
		LL tot=0;
		for(LL i=0;i<len;i++){
			tot+=numMap[s[i]];
		}
		LL tot1=0,tot2=0;
		for(LL i=1;i<len;i++){
			tot1+=numMap[s[i]];
		}
		for(LL i=0;i<len-1;i++){
			tot2+=numMap[s[i]];
		}
		LL res=max(tot1,tot2);
		if(res > tot-res){
			cout << "Alice " << abs(res-tot+res) << "\n";
		}else{
			cout << "Bob " << abs(res-tot+res) << "\n";
		}
		
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
