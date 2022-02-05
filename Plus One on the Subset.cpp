/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

LL val(){
	LL n;
	cin >> n;
	LL maxVal=0,minVal=10000000000;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		if(maxVal < temp)maxVal = temp;
		if(minVal > temp)minVal = temp;
	}
	
	return maxVal-minVal;
}


int main(){
	
	LL q;
	cin >> q;
	while(q--){
		cout << val() << "\n";
	}
	
	return 0;
}
