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
	string s;
	cin >> n >> s;
	vector<char> c1,c2;
	for(LL i=1;i<=n;i++){
		if((i%2)==0)c1.pb('B');
		if((i%2)!=0)c1.pb('R');
		if((i%2)==0)c2.pb('R');
		if((i%2)!=0)c2.pb('B');
	}
	LL tot1=0,tot2=0;

	for(LL i=0;i<n;i++){
		if(s[i]!='?'){
			c1[i]=s[i];
			c2[i]=s[i];
		}
	}
	for(LL i=0;i<n-1;i++){
		if(c1[i] == c1[i+1])tot1++;
		if(c2[i] == c2[i+1])tot2++;
	}
	
	if(tot1<=tot2){
		for(LL i=0;i<n;i++){
			cout << c1[i];
		}
	}else{
		for(LL i=0;i<n;i++){
			cout << c2[i];
		}
	}


//	for(LL i=0;i<n;i++){
//		if((i+1)%2==1){
//			if(s[i]=='R')tot1++;
//		}
//		if((i+1)%2==0){
//			if(s[i]=='B')tot1++;
//		}
//	}
//	for(LL i=0;i<n;i++){
//		if((i+1)%2==1){
//			if(s[i]=='B')tot2++;
//		}
//		if((i+1)%2==0){
//			if(s[i]=='R')tot2++;
//		}
//	}
//	if(tot1 <= tot2){
//		for(LL i=0;i<n;i++){
//			if(s[i]!='?'){
//				cout << s[i];
//			}
//			else if((i+1)%2==1){
//				cout << "B";
//			}
//			else if((i+1)%2==0){	
//				cout << "R";
//			}
//		}
//	}else{
//		for(LL i=0;i<n;i++){
//			if(s[i]!='?'){
//				cout << s[i];
//			}
//			else if((i+1)%2==1){
//				cout << "R";
//			}
//			else if((i+1)%2==0){	
//				cout << "B";
//			}
//		}
//	}
	cout << "\n";
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
