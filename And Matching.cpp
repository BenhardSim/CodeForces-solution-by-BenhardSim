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
#define INF 1e10+7
#define __gcd
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

bool isOne(int mask, int i){
	/*
		cek if binary mask at index i is equal to one 
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
	
	LL n,k;
	/*n is always power of two*/
	cin >> n >> k;
	if(k==0){
		for(LL i=0;i<n/2;i++){
			cout << i << " " << (i^(n-1)) << "\n";
		}
	}else if(k<n-1 && k > 0){
		/*
			the logic is to pair all the value with their complement except
			k and n-1 , because if we do AND operation to both of these the result
			will be k it self
		*/
		cout << 0 << " " << (k^(n-1)) << "\n";
		cout << k << " " << n-1 << "\n";
		for(LL i=0;i<n/2;i++){
			if(i!=k && i!=0 && i!=(k^(n-1)) && i!=n-1){
				cout << i << " " << (i^(n-1)) << "\n";
			}
		}
	}else{
		if(n>=8 && k==n-1){
			cout << (n-2) << " " << k << "\n";
			cout << (n-3) << " " << 1 << "\n";
			cout << ((n-3)^k) << " " << 0 << "\n";
			for(LL i=0;i<n/2;i++){
				if(i!=k && i!=0 && i!=1 && i!=n-2 && i!=((n-3)^k) && i!=n-3){
					cout << i << " " << (i^(n-1)) << "\n";
				}
			}
		}else cout << "-1\n";
		
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
