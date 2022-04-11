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

vi fac(16,1);

/*

	kunci penyelesaian :
	kita harus bisa membuat sebuah permutasi dari factorail 1 sampai 15 yang akan menghasilkan
	angka mendekati n dengan jumlah elemen se minimum mungkin,
	bagaiamana cara terbaik untuk menyusun factorial 1-15 untuk menghasil nilai n, dengan 
	jumlah elemen sesedikit mungkin
	
	dp : pada saat prekomputasi nilai factorial 1-15
	bitmask : pada saat mencari semua permutasi nilai represntasi binary 1-15
	bruteforce : karena mencari satu per satu dengan bitmask

*/

void solve(){

	LL n;
	cin >> n;
	LL val = INF;
	for(LL mask=0;mask<(1<<15);mask++){
		LL sum=0;
		LL cnt = __builtin_popcountll(mask);
		/*hitung jumlah permutasi factorial*/
		for(LL j=0;j<=15;j++){
			if((mask>>j)&1){
				sum+=fac[j+1];
			}
		}
		if(sum<=n){
			/*kita mencari nilai dari hasil jumlah permutasi factorial yang paling mendekati n*/
			/* 
				fungsi  __builtin_popcountll(n-sum) akan terpakai apabila tidak ada nilai sum
				yang membuat nya menjadi samadengan n
			*/
			LL res = __builtin_popcountll(n-sum) + cnt;
			val = min(val,res);
		}
	}
	
	cout << val << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	/*pre calculate factorial*/
	for(LL i=2;i<16;i++)fac[i]=fac[i-1]*i;
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
