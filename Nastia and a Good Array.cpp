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
#define INF 10e10+7
#define __gcd gcd
#define PI 3.14159265
#define __builtin_popcountll bpl
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

bool isOne(int mask, int i){
	/*
		check if binary mask at index i is equal to one 
		ex : mask = 9 -> (1001) and i = 3
		that means is the binary at index i=3 is equal to one ?
		and the answer is yes
		binary 	: 1 0 0 1
		index	: 3 2 1 0
	*/
	return (mask>>i)&1 == 1;
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

/*codeForce Round : # (Div. )*/

void solve(){

	LL n;
	cin >> n;
	vi num(n);
	fo(i,n)cin >> num[i];
	LL minv = INF,idx;
	for(LL i=0;i<n;i++){
		if(num[i] < minv){
			minv=num[i];
			idx=i+1;
		}
	}
	vector<vi> res;
	LL tot=0;
	for(LL i=0;i<n;i++){
		if(i!=idx-1){
			tot++;
			if(idx%2==1 && (i+1)%2==1){
				num[i] = minv;
				vi temp;
				temp.pb(i+1);
				temp.pb(idx);
				temp.pb(minv);
				temp.pb(minv);
				res.pb(temp);
			}else if(idx%2==1 && (i+1)%2==0){
				num[i] = minv+1;
				vi temp;
				temp.pb(i+1);
				temp.pb(idx);
				temp.pb(minv+1);
				temp.pb(minv);
				res.pb(temp);
			}else if(idx%2==0 && (i+1)%2==0){
				num[i] = minv;
				vi temp;
				temp.pb(i+1);
				temp.pb(idx);
				temp.pb(minv);
				temp.pb(minv);
				res.pb(temp);
			}else if(idx%2==0 && (i+1)%2==1){
				num[i] = minv+1;
				vi temp;
				temp.pb(i+1);
				temp.pb(idx);
				temp.pb(minv+1);
				temp.pb(minv);
				res.pb(temp);
			}
		}
	}
	cout << tot << "\n";
	for(LL i=0;i<res.size();i++){
		cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << " " << res[i][3] << "\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
