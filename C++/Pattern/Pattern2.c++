#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=4;

    int count=1;
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout<<count<<" ";
        }
        count+=1;
        cout<<endl;
    }

    return 0;
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4 ..