#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
    int n,n2;
    std::cin>>n>>n2;
    std::vector <int> nums1(n), nums2(n2);
  std::cout<<"enter the element of first array:\n";
 
    for(int i=0;i<n;i++){
        std::cin>>nums1[i];
    }
    for(int i=0;i<n2;i++){
        std::cin>>nums2[i];
    }
    std::unordered_set<int> set1(nums1.begin(),nums1.end());
    std::unordered_set<int> result;
    for(int x: nums2){
        if(set1.find(x)!=set1.end()){
            result.insert(x);
        }
    }
    for(int x: result){
        std::cout<<x<<" ";
    }
    
}