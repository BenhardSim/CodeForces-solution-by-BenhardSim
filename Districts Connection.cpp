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
#define __gcd gcd
#define PI 3.14159265
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
	vector<LL> nums(n+1);
	for(LL i=1;i<=n;i++){
		cin >> nums[i];
	}
	/*to use a root*/
	/*
	
		solution idea : 
		first we make the first element as the root of the graph, and then we connect any nodes
		that has a different value from the root, we also using a counter variable to find 
		what is that number that is different
		
		for each element that has different value with the root element we push the position index
		to an array, if all the element of the array is the same then it means there is no posible
		arengement that satisfy the condition ( return "NO" )
		
		after we iterarte through the elements there might be some element that is have a different
		value from the root element, so what we can do is to pair such element with the 
		counter varible containing a numbe that is different with from the root element, after that
		we can push the index position to the array
		
		
	*/
	vector<ii> res;
	LL idx=-1;
	for(LL i=1;i<=n;i++){
		if(nums[i] != nums[1]){
			idx=i;
			res.pb(mp(1,i));
		}
	}
	if(idx==-1){
		cout << "NO\n";
		return;
	}
	for(LL i=2;i<=n;i++){
		if(nums[i]==nums[1]){
			res.pb(mp(i,idx));
		}
	}
	cout << "YES\n";
	
	for(auto [x,y] : res){
		cout << x << " " << y << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
