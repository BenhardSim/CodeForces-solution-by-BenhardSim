/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)


void solve(){
	
	int a,b,c;
		cin>>a>>b>>c;
		if((a+c)%(2*b)==0&&a+c>0||((2*b-c)%a==0&&2*b-c>0)||((2*b-a)%c==0&&2*b-a>0))
			printf("YES\n");
		else
			printf("NO\n");
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
