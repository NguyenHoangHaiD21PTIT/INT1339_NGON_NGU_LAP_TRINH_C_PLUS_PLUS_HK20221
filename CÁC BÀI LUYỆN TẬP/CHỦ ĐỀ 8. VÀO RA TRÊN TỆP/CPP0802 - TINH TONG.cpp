#include<bits/stdc++.h>
using namespace std;
bool isInt(string s) {
    try {
        stoi(s);
        return true;
    } catch (exception e) {
        return false;
    }
}
int main(){
	string s;
	long long tong=0;
	fstream infile;
	infile.open("DATA.in");
	while(infile>>s){
		if(isInt(s)) tong+=stoi(s);
	}
	cout<<tong<<endl;
}
