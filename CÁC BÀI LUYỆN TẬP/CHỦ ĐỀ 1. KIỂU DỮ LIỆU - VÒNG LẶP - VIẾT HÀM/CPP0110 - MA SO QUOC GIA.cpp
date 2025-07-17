#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s, s1 = "084";
		cin >> s;
		int pos = s.find(s1);
		while(pos != string::npos){
			s.erase(pos, 3);
			pos = s.find(s1);
		}
		cout << s << endl;
	}
}

