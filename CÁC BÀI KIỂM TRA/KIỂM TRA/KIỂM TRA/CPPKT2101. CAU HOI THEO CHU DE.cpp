#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<string> topics;
    string topic;
    for (int i = 0; i < n; ++i) {
        getline(cin, topic);
        topics.push_back(topic);
        if (topic=="") { //Kết thúc một chủ đề
            cout << topics[0] << ": " << topics.size() - 2 << endl;//-2 là bỏ đi tên chủ đề và dòng trống
            topics.clear();
        }
    }
    //Chủ đề cuối cùng không có dòng trống kết thúc
    if (!topics.empty()) cout << topics[0] << ": " << topics.size() - 1 << endl;
} 

