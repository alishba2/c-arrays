// SELECTION SORT
// ACENDING
#include<iostream>
using namespace std;

int main(){
    int i,j,arr[5],min,temp;

    cout<<"Enter elements of array: ";
    for(i=1;i<=5;i++){
        cin>>arr[i];
    }
    for(i=1;i<=5;i++){
        min =i;
        for(j=i+1;j<=5;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"sorted array"<<endl;
    for(i=1;i<=5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}