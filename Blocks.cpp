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
	string s;
	cin >> s;
	LL c1=0,c2=0;
	fo(i,n){
		if(s[i]=='B')c1++;
		if(s[i]=='W')c2++;		
	}
	char target;
	if(c1%2==0 && c2%2==0){
		if(c1<=c2){
			target='B';
		}else target='W';
	}else if(c1%2==0){
		target='B';
	}else if(c2%2==0){
		target='W';
	}else{
		cout << -1 << "\n";
		return;
	}
	
	vi pos;
	LL tot=0;
	LL per=n*3;
	while(per--){
		LL i=0;
		while(i<n-1){
			if(s[i]==target){
				if(s[i+1]==target)i+=2;
				/*if adjecent element has different value*/
				else if(s[i+1]!=target){
					tot++;
					/*swap*/
					pos.pb(i+1);
					char temp;
					temp=s[i];
					s[i]=s[i+1];
					s[i+1]=temp;
					i++;
				}
			}else i++;
		}
	}

	
	for(LL i=0;i<n-1;i++){
		if(s[i]==s[i+1] && s[i]==target){
			tot++;
			pos.pb(i+1);
			i++;
		}else if(s[i]==target && s[i]!=s[i+1]){
			cout << "-1\n";
			return;
		}
	}
	
	cout << tot << "\n";
	for(auto j:pos){
		cout << j << " ";
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
//	cin >> t;
	while(t--)solve();
	return 0;
}
