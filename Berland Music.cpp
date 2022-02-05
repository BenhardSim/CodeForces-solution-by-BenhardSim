/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*Educational codeForce Round : #120 (Div. 2)*/

void solve(){
	LL n,up=0,down=0;
	string s;
	vector<LL> num;
	vector<pair<LL,LL>> upArr,downArr;
	
	cin >> n;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	cin >> s;
	for(LL i=0;i<n;i++){
		if(s[i] == '1'){
			upArr.pb(mp(num[i],i));
			up++;
		}
		else{
			downArr.pb(mp(num[i],i));
			down++;
		} 
	}
	sort(upArr.begin(),upArr.end());
	sort(downArr.begin(),downArr.end());

	for(LL i=0;i<upArr.size();i++){
		upArr[i].f = i+1+down;
		num[upArr[i].s] = upArr[i].f;
	}

	for(LL i=0;i<downArr.size();i++){
		downArr[i].f = i+1;
		num[downArr[i].s] = downArr[i].f;
	}

	for(LL i=0;i<n;i++){
		cout << num[i] << " ";
	}
	cout << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
