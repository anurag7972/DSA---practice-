#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int>& nums,int low,int high,int key){

    while(low<=high){

        int mid=(low+high)/2;

        if(nums[mid]==key){
            return mid;
        }
        else if(nums[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;

};
int main(){
    int n;
    cout<<"enter the size of array\n";
    cin>>n;

    vector <int> nums(n);
    cout<<"enter the element of array\n";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int low=0;
    int high=n-1;
    int key;
    cout<<"enter the key element \n";
    cin>>key;

    int b=binarySearch(nums,low,high,key);

     if(b!=-1){
        cout<<"the element:"<<key<<" :is found on the"<<b<<" :position"<<endl;
     }else{
        cout<<"element not found\n";
     }
    
    
}