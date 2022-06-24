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

/*codeForce Round : # (Div. )*/

void solve(){

	LL n;
	cin >> n;
	vi num(n),num2(n);
	fo(i,n){
		cin >> num[i];
		num2[i]=num[i];
	} 
	sort(num2.begin(),num2.end());
	LL ii=0;
	if(n%2==1)ii=1;
	for(LL i=ii;i<n-1;i+=2){
		if(num[i] > num[i+1]){
			LL temp = num[i];
			num[i] = num[i+1];
			num[i+1]=temp;
		}
	}
	for(LL i=0;i<n;i++){
		if(num2[i]!=num[i]){
			cout << "NO\n";
			return;
		}
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
