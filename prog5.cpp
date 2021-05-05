// BINARY SEARCH
#include<iostream>
using namespace std;

int main(){
    int i , mid , start, end , arr[5]={1,2,3,4,5},loc,num;

    cout<<"Enter a number you want to search"<<endl;

    cin >> num;



    start = 0;
    end =  4;
    loc = -1;

    while(start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid]==num){
            loc == mid;
              break;
        }
      
        
        else if(num > arr[mid]){
            num = mid +1;
              }
             else{
              num = mid - 1;
        }}
    
    if(loc == -1){
        cout<<"Not found";
    }
    else
    cout<<"Found at location"<<loc;


}