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
	
	string a,s;
	vector<LL> val;
	cin >> a >> s;
	LL lena=a.length(),lenb=s.length();
	LL i=lena-1,j=lenb-1;
	while(i>=0 && j>= 0){
		if(a[i] <= s[j]){
			val.pb((a[i]-'0')-(s[j]-'0'));
		}else if(a[i] > s[j] && (j-1) >= 0){
			LL res=((10*(s[j-1]-'0'))+(s[j]-'0')) - (a[i]-'0');
			if(res>=10 && res<=18){
				val.pb(res);
				j--;
			}else{
				cout << -1 << "\n";
				return;
			}
		}else{
			cout << -1 << "\n";
			return;
		}
		i--;
		j--;
	}
	reverse(val.begin(),val.end());
	for(LL i=0;i<val.size();i++){
		cout << val[i];
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}