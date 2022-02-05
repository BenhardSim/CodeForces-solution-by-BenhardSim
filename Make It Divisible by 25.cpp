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
	
	string s;
	LL idx1=-1,idx2=-1,res1=1e10+5;
	cin >> s;
	/*cek 5*/
	for(LL i=s.length()-1;i>=0;i--){
		if(s[i] == '5'){
			idx1=i;
			break;
		}
	}
	for(LL i=idx1-1;i>=0;i--){
		if(s[i] == '7' || s[i] == '2'){
			idx2=i;
			break;
		}
	}
	if(idx2 != -1){
		res1=s.length()-idx2-2;
	}
	
	/*cek 0*/
	LL idx3=-1,idx4=-1,res2=1e10+5;
	for(LL i=s.length()-1;i>=0;i--){
		if(s[i] == '0'){
			idx3=i;
			break;
		}
	}
	for(LL i=idx3-1;i>=0;i--){
		if(s[i] == '5' || s[i] == '0'){
			idx4=i;
			break;
		}
	}
	if(idx4!=-1){
		res2=s.length()-idx4-2;
	}
//	cout << idx1 << " " << idx2 << " | " << idx3 << " " << idx4 << "\n";
	cout << min(res1,res2) << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
