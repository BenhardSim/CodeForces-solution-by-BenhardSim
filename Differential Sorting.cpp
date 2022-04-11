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
	
	LL n;
	cin >> n;
	vi num(n);
	fo(i,n)cin >> num[i];
	/*
		nilai dari n dan n-1 hari increasing karena kita tidak dapat
		melakuakn operasi terhadap kedua element tersebut
	*/
	if(num[n-2] > num[n-1]){
		cout << -1 << "\n";
		return;
	}else{
		/*
			kondisi untuk nilai dari num[n] > 0
			apa bila nilai num[n] lebih dari 0 dan nilai dari num[n-1] < num[n]
			maka nilai dari num[n-2]" pasti negatif karena karena 
			
			num[n-1] - num[n] < 0
			num[n-2] = num[n-1] - num[n] < 0
			
			yang artinya nilai num[n-2] < num[n-1] < num[n], atau dikatakan sorted
			
			apabila nilai dari num[n] < 0 maka nilali dari num[n-2] tidak akan
			menjadi negatif
			
			proof : 
			num[n] < 0
		
			bila num[n-1] < num[n] make nilai num[n-1] juga negartif
			num[n-1] < 0
			
			artinya :
			num[n-2] = num[n-1] - num[n], karena nilai num[n-1] dan num[n] kurang
			dari 0 kita bisa mengalikan -1 kepada keduanya
			
			num[n-2] = -num[n-1] + num[n]
			num[n-2] = num[n]-num[n-1]
			
			karean  num[n] > num[n-1] maka
			
			num[n-2] > 0
			
			artinya untuk nilai num[n] < 0 apabila nilai [1..n-2] tidak sorted
			maka akan mengeluarkan nilai -1 
			
		*/
		if(num[n-1] < 0){
			for(LL i=0;i<n-1;i++){
				if(num[i] > num[i+1]){
					cout << -1 << "\n";
					return;
				}
			}
			cout << 0 << "\n";
			return;
		}else if(num[n-1] >= 0){
			cout << n-2 << "\n";
			for(LL i=0;i<n-2;i++){
				cout << i+1 << " " << n-1 << " " << n << "\n";
			}
		}
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
