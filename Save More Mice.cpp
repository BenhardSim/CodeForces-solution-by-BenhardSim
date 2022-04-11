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

/*
	ide solusi : 
	misal panjang dari coordinat adalah n, sekarang kita harus memikirkan berapa banyak 
	tikus yang telah di tangkap oleh kucing pada saat kucing sudah sampai di titik n,lalu 
	kita mengurangi total tikus dengan yang berhasil di tangkap kucing , maka itulah yang berhasil 
	masuk ke lubang
	
	pertama kita harus mensort nilai dari array dari besar terkecil karena kita ingin menyelamatkan 
	tikus yang lebih dekat dengan lubang terlebih dahulu, setelah itu kita memasukkan jarak antara
	tikus dengan lubang ke sebuah variable total
	
	variable total menunjukkan berapa langkah yang telah diambil tikus untuk sampai ke lubang
	
	karena langkah yang diambil tikus juga sama dengan langkah kucing setelah maka selama langkah
	total masih lebih kecil dari n maka itulah jumlah dari tikus yang selamat masuk ke lubang
*/

void solve(){

	LL n,k;
	cin >> n >> k;
	vi num(k);
	fo(i,k)cin >> num[i];
	sort(num.rbegin(),num.rend());
	LL tot=0,res=0;
	for(LL i=0;i<k;i++){
		tot+=n-num[i];
		if(tot<n)res++;
	}
	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
