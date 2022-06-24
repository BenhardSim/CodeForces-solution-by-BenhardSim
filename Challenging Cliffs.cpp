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
	vi num(n);
	fo(i,n)cin >> num[i];
	sort(num.begin(),num.end());
	LL minv=INF,idx1=-1,idx2=-1;
	fo(i,n-1){
		if(num[i+1]-num[i] < minv){
			minv=num[i+1]-num[i];
			idx1=i;
			idx2=i+1;
		}
	}
	if(idx1!=-1)cout << num[idx1] << " ";
	for(LL i=0;i<num.size();i++){
		if(num[i] >= num[idx1] && idx1!=i && idx2!=i){
			cout << num[i] << " ";
		}
	}
	for(LL i=0;i<num.size();i++){
		if(num[i] < num[idx2] && idx2!=i && idx1!=i){
			cout << num[i] << " ";
		}
	}
	if(idx2!=-1)cout << num[idx2] << " ";
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
