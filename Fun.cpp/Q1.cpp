//Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;
void square(int n){
    int i,squ;
    for(i=0;i<=n;i++){
        squ=i*i;
        cout<<squ<<endl;
        }
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    square(n);
}