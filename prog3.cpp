// write a program that print array in reverse order

#include<iostream>
using namespace std;

int main(){
    int i,reverse , arr[5];

    cout<<"Enter a number: "<<endl;

    for(i=1;i<=5;i++){
        cin>>arr[i];

    }
    cout<<"Array in reverse order"<<endl;
    for(i=5;i>=1;i--)
        cout<<arr[i]<<endl;
    
    
}