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

/*
	main observation : there must be ONE element that is belong to the increment array
	and the decrement array. The biggest minimum value is the length divided by 2 and if the 
	original length is an odd number then add one after dividing it with two.
*/

void solve(){

	LL n;
	cin >> n;
	map<LL,LL> freq;
	fo(i,n){
		LL temp;
		cin >> temp;
		freq[temp]++;
	}
	LL tot=0;
	for(auto j:freq){
		if(j.s>=2)tot+=2;
		else tot++;
	}
	if(tot%2==0)tot/=2;
	else tot=(tot/2)+1;
	cout << tot << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


