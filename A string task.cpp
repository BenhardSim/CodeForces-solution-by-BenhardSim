#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string vow = "AOYEUI";
	string word;
	
	cin >> word;
	for(int i=0;i<word.size();i++){
		if(vow.find(word[i]) != NULL){
			word.erase(word.begin()+i);
		}
	}
	
	for(int i=0;i<word.size();i++){
		printf("%c ",word[i]);
	}
	
	
	return 0;
}
