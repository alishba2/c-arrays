// Array Searching

// write a program that take value from user and search that is this value is in the array or not


#include<iostream>
using namespace std;

int main(){
    int i,num,arr[5],pos;
    pos = -1;
    
    cout<<"Enter a number: "<<endl;
    cin >> num;

    cout<<"Enter elements of array: "<<endl;
    for(i=1;i<=5;i++){
        cin>>arr[i];
    }
    for(i=1;i<=5;i++){
    if(num==arr[i]){
       pos = i;
        
    }}
    if(pos==-1){
        cout<<"Number does not exist in the array";
    }
    else{
        cout<<"Number exist in the array";
    }
}