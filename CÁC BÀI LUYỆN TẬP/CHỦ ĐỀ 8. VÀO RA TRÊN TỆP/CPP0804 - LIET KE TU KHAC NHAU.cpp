#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string &s){
	for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
	return s;
}
int main(){
	string s;
	set <string> ss;
	fstream infile;
	infile.open("VANBAN.in");
	while(infile >> s) ss.insert (chuanhoa(s));
	for(auto x: ss) cout << x << endl;
}
