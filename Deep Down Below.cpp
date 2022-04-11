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

/*

	Penjelasan solusi : 
	untuk mempermudah masalah kita harus memperhatikan gua/cave secara individual
	dan mencari berapa nilai minimum yang dapat di berikan pada gua tersebut untuk mencapai 
	akhir dari gua dengan player masih selamat
	
	misal gua A memiliki monster dengan armor : 1 3 4 7 3 1
	
	cara mencari nilai minimum untuk gua tersebut adalah dengan mencari nilai terbesar dari
	gua tersebut yaitu dapat dilihat nilai tersebesar nya adalah 7
	
	kita dapat mengatakan bahwa nilai minum yang dibutuhkan untuk menyelesaikan gua tersebut
	adalah 8, karena nilai 8 adalah nilai terbesar minimal yang palin kecil untuk dapat 
	menyelesaikan gua tersebut
	
	tetapi di soal dikatakan bahwa --untuk setiap monster yang dikalahkan hp dari player
	bertambah satu kali-- ini artinya kita dapat memulai HP player dengan nilai yang lebih
	kecil dari 8 karena terdapat sebanyak 3 monster yang berada di depan monster
	nilai terbesar artinya kita dapat mengurangi 8 dengan 3 yang artinya 5
	
	di tulis secara formal : 
	
	x + i > big
	
	x = nilai inisial 
	i = banyak elemen di depaan monster armor terbesar
	big = nilai terbesar elemen
	
	kita ingin mencari nilai x terbesar maka
	
	untuk i = [0..k] cari nilai big-i terbesar

*/

void solve(){

	LL n;
	cin >> n;
	vector<ii> big;
	while(n--){
		LL k,maxv=0;
		cin >> k;
		vi num(k);
		fo(i,k)cin >> num[i];
		fo(i,k){
			maxv=max(maxv,num[i]+1-i);
		}
		/*push max val and array len*/
		big.pb(mp(maxv,k));
	}
	LL l=0,r=0;
	sort(big.begin(),big.end());
	for(auto j : big){
		r=max(r,j.f-l);
		l+=j.s;
	}
	
	cout << r << "\n";
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
