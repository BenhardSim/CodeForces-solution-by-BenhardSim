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
92 1
11111101111111111001011010001110101110010010000111001001111101111110100111001101001011011001
*/

void solve(){

	LL n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	LL tot=0;
	LL idx1=-1,idx2=-1;
	/*index terbesar*/
	for(LL i=0;i<s.length();i++){
		if(s[i]=='1') tot+=11;
		if(s[i]=='1') idx2=i;
	}
	/*index terkecil*/
	for(LL i=0;i<s.length();i++){
		if(s[i]=='1'){
			idx1=i;
			break;
		}
	}
	LL f=1;
	if(n-1-idx2 <= k && idx2!=-1){
		tot-=10;
		k-=(n-1-idx2);
		f=0;
	}
	if((idx1!=idx2 || f) && idx1 <= k && idx1!=-1){
		tot-=1;
	}
	cout << tot << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


