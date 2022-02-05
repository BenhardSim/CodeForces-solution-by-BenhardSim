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

/*codeForce Round : #748 (Div. 3)*/

void solve(){
	LL a,b,c;
	cin >> a >> b >> c;
	int big = max(a,max(b,c));
	if(a==b&&b==c){
		cout << 1 << " " << 1 << " " << 1 << "\n";
		return;
	}
	if(a==big && b==big){
		cout << 1 << " " << 1 << " " << (big-c)+1 << "\n";
	}
	else if(a==big && c==big){
		cout << 1 << " " << (big-b)+1 << " " << 1 << "\n";
	}
	else if(b==big && c==big){
		cout << (big-a)+1 << " " << 1 << " " << 1 << "\n";
	}
	
	else if(a==big){
		cout << 0 << " " << (big-b)+1 << " " << (big-c)+1 << "\n";
		return;
	}
	else if(b==big){
		cout << (big-a)+1 << " " << 0 << " " << (big-c)+1 << "\n";
	}
	else if(c==big){
		cout << (big-a)+1 << " " << (big-b)+1 << " " << 0 << "\n";
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
