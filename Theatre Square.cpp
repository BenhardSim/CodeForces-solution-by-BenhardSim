#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double n,m,a;
	long long int sum =0;
	string str;
	cin >> n >> m >> a;
	sum = ceil(n/a) * ceil(m/a);
	str = to_string(sum);
	cout << str;
	
	return 0;
}
