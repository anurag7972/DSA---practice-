#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int>& nums,int low,int high,int key){

   if(low<=high){
    int mid=(low+high)/2;

    if(key==nums[mid]){
        return mid;
    }else if(key<nums[mid]){
        return binarySearch(nums,low,mid-1,key);
    }else{
        return binarySearch(nums,mid+1,high,key);
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