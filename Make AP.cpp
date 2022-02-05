/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

void val(){
	LL a,b,c;
	cin >> a >> b >> c;
	if(abs(b-a) == abs(c-a)){
		cout << "YES" << "\n";
		return;
	}
	else if(b <= a && b <= c){
		LL d = abs(c-a)/2;
		if((a+d)%b == 0 && d!=0){
			cout << "YES" << "\n";
			return;
		}
		cout << "NO" << "\n";
		return;
	}else if(c<=b && c <= a){
		LL d = b-a;
		if((b+d)%c == 0 && d!=0){
			cout << "YES" << "\n";
			return;
		}
		cout << "NO" << "\n";
		return;
	}else if(a<=b && a<=c){
		LL d = c-b;
		if((b-d)%a == 0 && d!=0){
			cout << "YES" << "\n";
			return;
		}
		cout << "NO" << "\n";
		return;
	}
	cout << "NO" << "\n";
	return;
	
}

int main(){
	
	LL q;
	cin >> q;
	while(q--){
		val() ;
	}
	
	return 0;
}
