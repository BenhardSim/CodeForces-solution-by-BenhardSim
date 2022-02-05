#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string word;
	char hel[5] = {'h','e','l','l','o'};
	int j=0;
	cin >> word;
	for(int i=0;i<word.size();i++){
		if(word[i] == hel[j])j++;
	}
	if(j==5) cout << "YES";
	else cout << "NO";
	return 0;
}
