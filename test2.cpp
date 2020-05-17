#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    
    string s;
    set<string> rec;
    while(getline(cin,s)){
        string tmp;
        stringstream ss;
        ss<<s;
        ss>>tmp;
        if(!rec.count(tmp)){
            rec.insert(tmp);
        }
    }
    for(auto &t:rec){
        cout<<t<<endl;
    }
    
    return 0;
}