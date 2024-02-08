#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 2608;

    string str = to_string(num);

    reverse(str.begin(), str.end());

    int num2 = stoi(str);
    cout<<num2;

    return 0;
}