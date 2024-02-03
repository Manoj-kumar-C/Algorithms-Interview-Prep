#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100], n=100, top =-1, x;

void push(){

    cout<<"Enter the value to b pushed "<<endl;
    cin>>x;

    if(top >= n-1){
        cout<<"Stack is OverFlow"<<endl;
    }else{
        arr[++top] = x;
    }

}

void pop(){

    if(top <=0){
        cout<<"Stack is UnderFlow"<<endl;
    }else{
        cout<<"Pop element is "<<arr[top]<<endl;
        --top;        
    }

}

void display(){
    for(int i= top; i>=0; i--){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){

    int choice;

    cout<<"1.Push \n2.Pop\n3.Display\n4.Exit"<<endl;

    cin>>choice;

    do{
        switch(choice){
            case 1:
             push();
             break;
            case 2:
             pop();
             break;
            case 3:
             display();
             break;
            case 4: 
             break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
                         
    }while(choice!=4);

    return 0;

}

