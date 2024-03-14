#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string str1 ="madam";
    string str2 = "mzada";

    sort(str1.begin(), str1.end());

    sort(str2.begin(), str2.end());

    if(str1.length() != str2.length()){
        cout<<"Not Anagram";
    }else if(str1 == str2){
        cout<<"Anagram";
    }else{
        cout<<"Not Anagram";
    }


    return 0;
}