#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int max=arr[0];

     for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the maximum value element in array  :"<<max;
}