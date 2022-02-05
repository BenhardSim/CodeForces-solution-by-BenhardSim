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
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

LL sumPairs(vi num,LL n,LL target){
	map<LL,LL> pairs;
	LL count=0;
	for(LL i=0;i<n;i++){
		/*search if the complement exist inside the map*/
		if(pairs.find(target-num[i]) != pairs.end()){
			/*put all the total element into a variable*/
			count+=pairs[target-num[i]];
		}
		pairs[num[i]]++;
	}
	return count;
}

/*codeForce Round : #747 (Div. 2)*/

void solve(){
	
	LL n,cek=0,idx=0;
	char ch;
	string s;
	cin >> n >> ch >> s;
	for(LL i=0;i<n;i++){
		if(s[i] == ch){
			cek++;
			idx=i+1;
		}
	}
	if(cek==n){
		cout << "0\n";
		return;
	}
	else if(cek == 0)cout << "2\n" << n << " " << n-1 << "\n";
	else if(idx>n/2)cout << "1\n" << idx << "\n";
	else cout << "2\n" << n << " " << n-1 << "\n";

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
