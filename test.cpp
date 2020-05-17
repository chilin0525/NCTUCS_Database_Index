#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    
    string s;
    while(getline(cin,s)){
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==','){
                ++cnt;                
                if(cnt>2){
                    cout<<" ";
                }   
                else{
                    cout<<',';
                }
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    
    return 0;
}