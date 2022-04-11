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

/*codeForce Round : #752 (Div. 2)*/

/*

	solution idea : 
	if we split the array to sub array with length of one that means
	the LIS (longest common subsequnce) of the subarray will be one 
	
	ex : [1,3,4,2] -> LIS(1) -> 1, LIS (3) -> 1, LIS(4) -> 1, LIS(2) -> 1
	
	that means if we have EVEN number of one, and do the XOR operation to it
	the result will be zero
	
	ex : 01 ^ 01 ^ 01 ^ 01 => 0
	
	but that won't be the case if we have ODD number of one,
	what we can do is to search if there is exist at least one sub array that have
	a value of ( ai >= ai+1 ), we can make this into a subarray, we know that this 
	sub array have a LIS of one 
	
	ex [4,3] -> LIS([4,3]) -> 1
	
	and if there is exist such subarray then the answer is YES otherwise NO
	
*/

void solve(){
	
	LL n;
	cin >> n;
	vi num;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	if(n%2==0){
		cout << "YES\n";
	}else{
		for(LL i=0;i<n-1;i++){
			if(num[i] >= num[i+1]){
				cout << "YES\n";
				return;
			}
		}
		cout << "NO\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
