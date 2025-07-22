#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string &s){
	for(int i = 0;i < s.size();i++) s[i] = tolower(s[i]);
	return s;
}
int main(){
	fstream in1, in2;
	in1.open("DATA1.in");
	in2.open("DATA2.in");
	set <string> sstr1, sstr2, sstr3;
	string s1, s2;
	while(in1 >> s1){
		string s;
		s = chuanhoa(s1);
		sstr1.insert(s);
		sstr3.insert(s);
	}
	while(in2 >> s2){
		string s;
		s = chuanhoa(s2);
		sstr2.insert(s);
		sstr3.insert(s);
	}
	for(auto x: sstr3) cout<<x<<" ";
	cout << endl;
	for(auto x: sstr1){
		if(sstr2.find(x) != sstr2.end()) cout << x << " ";
	}
}
	
