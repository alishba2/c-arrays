// ACCESSING ARRAY ELEMENT USING LOOP

#include<iostream>
using namespace std;

int main(){
    int i , arr[5] ,num;

    cout<<"Enter elements of array: "<<endl;
    for(i=1;i<=5;i++){
        cin >> arr[i];
    }
    for(i=1;i<=5;i++){
        cout<<"Elements You have entered are: "<<arr[i]<<endl;
    }
}