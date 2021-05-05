// program that inputs 5 numbers and display max number

#include<iostream>
using namespace std;

int main(){

    int i , max,arr[5] , num;

    cout<<"Enter any 5 number: "<<endl;
    for(i=1;i<=5;i++){
        cin>>arr[i];
    }

    max=arr[0];

    for(i=1;i<=5;i++){

    if(arr[i]>max){

        max=arr[i];

         }
    }
    cout<<"MAXIMUM NUMBER IS ARRAY IS: "<<max;
    return 0;
}
