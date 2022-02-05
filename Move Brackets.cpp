#include <bits/stdc++.h>
using namespace std;
#define LL long long 

LL move(){
	LL n,sum=0;
	vector<int> par;
	cin >> n;
	for(LL i=0;i<n;i++){
		char temp;
		cin >> temp;
		if(temp == '(')par.push_back(0);
		else par.push_back(1);
	}
	for(LL i=0;i<n;i++){
		if(par[i] == 0)sum++;
		else if(sum!=0)sum--;
	}
	return sum;
}

int main(){
	
	LL t;
	cin >> t;
	while(t--){
		cout << move() << "\n\n";
	}
	
	return 0;
}
