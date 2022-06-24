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
#define INF 10e9+7
#define PI 3.14159265
#define bpl __builtin_popcountll
#define gcd __gcd 
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/
/*
	input : 
	50 100 50 100 200 0 100 100
	0 0 0 200 200 200 100 100
	50 100 100 100 100 100 200 100
	200 200 200 200 100 100 100 100
	0 50 80 80 255 255 255 100
	128 128 0 0 100 100 100 200
	100 100 200 100 200 200 200 200
	100 100 100 100 100 100 100 200
	
	127 208 244 44 212 213 251 123
	188 196 216 87 236 25 180 243
	238 165 129 75 117 157 166 6
	240 42 58 112 212 212 5 112
	82 90 51 123 230 149 163 40
	125 237 187 104 78 250 181 221
	58 5 173 171 223 120 29 155
	211 243 89 184 203 122 23 155
	
	100 100 100 100 100
	100 200 200 200 100
	250 100 200 100 250
	
	80 80 80 100 100 100 100 100 100 100
	190 190 190 255 255 255 255 255 255 255
	255 130 130 130 130 100 100 100 0 0
	100 130 130 130 130 0 0 0 0 0
	0 0 120 120 120 100 100 100 100 100
	36 36 36 36 36 80 80 80 80 80
	180 180 180 180 180 80 80 80 80 0 0
	190 190 190 190 100 130 130 130 130 130
	130 130 130 100 100 100 100 100 100 100
	100 100 100 100 100 100 80 80 80 80	
	
	40 40 40 90 90 100 100 100 100 100
	190 190 190 255 255 255 255 255 255 255
	255 130 130 130 130 100 100 100 0 0
	100 130 130 130 130 0 0 0 0 0
	0 0 120 120 120 100 100 100 100 100
	36 36 36 36 36 80 80 80 80 80
	180 180 180 180 180 80 80 80 0 0
	190 190 190 190 100 100 130 130 130 130 
	130 130 130 100 100 100 100 100 100 100
	100 100 100 100 100 100 80 80 80 80 
*/

void solve(){

	LL n=10,m=10;
//	int arr[n][n]={{50,100,50,100,200,0,100,100},
//				{0,0,0,200,200,200,100,100},
//				{50,100,100,100,100,100,200,100},
//				{200,200,200,200,100,100,100,100},
//				{0,50,80,80,255,255,255,100},
//				{128,128,0,0,100,100,100,200},
//				{100,100,200,100,200,200,200,200},
//				{100,100,100,100,100,100,100,200}
//				};
	int arr[n][m];
	for(LL i=0;i<n;i++){
		for(LL j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}
			
	map<LL,LL> freq;			
	for(LL i=0;i<n;i++){
		for(LL j=0;j<m;j++){
			freq[arr[i][j]]++;
		}
	}
	cout << "\nHuffman encoding : \n";
	for(auto j:freq){
		cout << j.f << " : " << j.s << "\n";
	}
	
	cout << "\nRLE Encoding : \n";
	LL tot=0;
	LL maxv=0;
	for(LL i=0;i<n;i++){
		map<LL,LL> temp;
		for(LL j=0;j<m;j++){
			temp[arr[i][j]]++;
		}
		/*output*/
		for(auto j:temp){
			cout << "(" << j.f << ", " << j.s << ") ";
			maxv = max(maxv,j.s);
			tot++;
		}
		cout << "\n";
	}
	
	cout << "Total pasang : " << tot << "\n";
	cout << "Nilai Bit terbesar : " << maxv << "\n";
	LL bit;
	for(LL i=0;i<=30;i++){
		if((maxv>>i)&1==1)bit=i;
	}
	
	cout << "banyak bit : " << tot*3 + tot*(bit+1) << "\n";
	
	cout << "\nThreshold matrisk : \n";
	LL t=128;
	LL jml=0;
	for(LL i=0;i<n;i++){
		for(LL j=0;j<m;j++){
			if(arr[i][j]>=t){
				 cout << "1 ";
				jml++;	 
			}
			else cout << "0 ";
		}
		cout << "\n";
	}
	
	cout << "total bit : " << jml << "\n";

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	while(t--)solve();
	return 0;
}


