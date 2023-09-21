//Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;
int digit(int n){
    int count=1,i,dig;
    for(i=1;i<=n;i++){
        dig=n%10;
        count=count+1;
        n=n/10;
    }
    return count;
}
int main(){
    int num,square;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Total number of digit is :"<<digit(num)<<endl;
    square=num*num;
    cout<<"Square of the number is :"<<square;


}