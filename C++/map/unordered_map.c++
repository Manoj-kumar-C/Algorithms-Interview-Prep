#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int ,int> m;

    int arr[]={1,2,3,4,5,6,6,3,3,2};

    for(auto x: arr){
        m[x]++;
    }
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    // m.erase(5) To Erase the element in the map
    // m.empty() To Empty Completely the Map 
}