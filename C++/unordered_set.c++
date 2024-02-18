#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> str;

    str.insert("hello");
    str.insert("world");
   

    for(auto it: str){
        cout<<it<<endl;
    }

    return 0;
}