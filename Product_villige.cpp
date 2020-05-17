#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    
    string s;
    set<string> rec,rec2,rec3,sumrec; 
    unordered_map<string,int> rec4,rec5,rec6;
    while(getline(cin,s)){
        stringstream ss;
        string tmp,tmp1,tmp2,tmp3;
        ss<<s;
        ss>>tmp>>tmp1>>tmp2;

        if(!rec.count(tmp)){
            rec4[tmp]=rec4.size()+1;
            rec4[tmp]=rec4[tmp]*100;
            rec.insert(tmp);
        }

        if(!rec2.count(tmp1)){
            rec5[tmp1]=(rec5.size()+1)%100;
            rec2.insert(tmp1);
        }

        if(!rec3.count(tmp2)){
            rec6[tmp2]=rec6.size()+1;
            rec3.insert(tmp2);
        }

        tmp3=tmp+tmp1+tmp2;

        if(!sumrec.count(tmp3)){
            sumrec.insert(tmp3);
            stringstream sss;
            string tmps,tmps2,tmps3;
            sss<<(rec4[tmp]+rec5[tmp1])*10000+rec6[tmp2];
            sss>>tmps;
            /*sss.clear();
            sss << rec5[tmp1];
            sss>>tmps2;
            sss.clear();
            sss<<rec6[tmp2];
            sss>>tmps3;
            string answer= tmps+tmps2+tmps3;*/
            cout<<tmp2<<" "<<tmps<<endl;
        }
    }

    
    return 0;
}