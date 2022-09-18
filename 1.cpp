#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> abc;
    int a,b,x;
    int s,e,sl,el;
    int sum;
    string ss,es;
    while(cin>>a>>b){
        for(x=0;x!=a;x++){
            cin>>abc[x];
        }
        while(b--){
            cin>>s>>e;
            sum=0;
            ss=abc[s];
            es=abc[e];
            sl=ss.length();
            el=es.length();
            if(sl<el){
                for(x=0;x!=sl;x++){
                    if(ss[x]!=es[x]){
                        break;
                    }
                    else{
                        sum++;
                    }
                }
            }
            else{
                for(x=0;x!=el;x++){
                    if(ss[x]!=es[x]){
                        break;
                    }
                    else{
                        sum++;
                    }
                }
            }
        }
    }
}