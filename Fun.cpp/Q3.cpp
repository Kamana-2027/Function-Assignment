//Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
void odd(int a,int b){
    int i;
    for(i=a;i<=b;i=i+2){
        cout<<i<<endl;
    }
}

int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    odd(a,b);
}