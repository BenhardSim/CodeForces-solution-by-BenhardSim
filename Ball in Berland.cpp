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

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

/*
	
	penjelasan solusi : 
	
	daripada mencari kemungkinan sebuah pair dapat berpasangan, kita dapat mencari
	banyak kemungkinan pair yang tidak dapat berpasangan atau dengan kata lain
	kita mencari komplemen dari solusi yang diminta
	
	hal ini lebih mudah dilakukan karena , bila salah satu dari nilai a(pria)
	atau salah satu nilai b(perempuan) memiliki nilai yang sama dengan nilai 
	pasangan lain nya maka kita dapat mengatakan kedua pasangan tersebut tidak 
	memenuhi kriteria
	
	jadi tujuan utama yang perlu dilakukan adalah 
	
	jumlah solusi = jumlah total permutasi - jumlah dari element yang tidak dapat dipasangakan 
	
	atau 
	
	solusi = semua_permutasi - bukan_solusi 	
	
	untuk mencari apa dari elemnt yang bukan merupakn solusi kita dapat menghitung 
	frekuensi tiap nilai dari a dan tiap nilai dari b, apabila frekuensi dari 
	suatu element a memiliki jumlah lebih dari 1 artinya terdapat elemen pada a
	yang memiliki element yang sama ( lebih dari satu )
	
	apabila kita menemukan kasus ini kita menincrment nilai bukan solusi sebanyak
	satu kali
	
	setelah selesai menghitung semua frekuensi elemen pada array a dan b
	kita dapatkan kita perlu membagi nilai menjadi 2 karena pada saat perhitunagn 
	kita menghitunga 2 kali nilai yang bukan solusi yaitu untuk satu pasang pertama 
	dan satu pasang lainnya
	
	sedengan kan untuk semua_permutasi kita dapat menghitung nya dengan menggunakan
	arithmathic progression yaitu 
	
	semua_permutasi = sum(1..k-1)
	
	lalu kurangi dengan bukan_solusi dan didapatkan hasil yang diinginkan 

*/

void solve(){

	LL a,b,k;
	cin >> a >> b >> k;
	vi num1(k),num2(k),vis(k);
	map<LL,LL> pair1,pair2;
	fo(i,k){
		LL temp;
		cin >> temp;
		num1[i]=temp;
		pair1[temp]++;
		vis[i]=0;
	}
	fo(i,k){
		LL temp;
		cin >> temp;
		num2[i]=temp;
		pair2[temp]++;
	}
	
	LL ans = 0;
	for(LL i=1;i<k;i++)ans+=i;
	LL tot=0;
	fo(i,k){
		/*
		dikurangi satu karena yang dihitung adalah frekuensi diri 
		sendiri dan element lainnya
		*/
		tot+=(pair1[num1[i]]-1)+(pair2[num2[i]]-1);
	}
	tot/=2;
	cout << ans-tot << "\n";
	

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
