#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    
    string s;
    set<string> rec;
    while(getline(cin,s)){
        stringstream ss;
        string tmp;
        ss<<s;
        ss>>tmp;
        if(!rec.count(tmp)){
            rec.insert(tmp);
        }
    }

    int index=0;
    for(auto &t:rec){
        cout<<t<<" "<<++index<<endl;
    }
    
    return 0;
}