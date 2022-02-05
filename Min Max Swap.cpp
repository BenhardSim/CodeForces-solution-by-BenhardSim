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

/*codeForce Round : #768 (Div. 2)*/

void solve(){
	
	LL n;
	cin >> n;
	vi arrA,arrB;
	fo(i,n){
		LL temp;
		cin >> temp;
		arrA.pb(temp);
	}
	fo(i,n){
		LL temp;
		cin >> temp;
		arrB.pb(temp);
	}
	for(LL i=0;i<arrA.size();i++){
		if(arrA[i] > arrB[i]){
			/*swap*/
			LL temp = arrA[i];
			arrA[i] = arrB[i];
			arrB[i] = temp;
		}
	}
	LL big1=0,big2=0;
	for(LL i=0;i<arrA.size();i++){
		big1 = max(big1,arrA[i]);
		big2 = max(big2,arrB[i]);
	}
	cout << big1*big2 << "\n";
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
