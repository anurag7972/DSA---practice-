#include <iostream>
#include <vector>
using namespace std;
class solution
{
 public:
    int searchPosition(vector<int>& nums, int target){
        
         int index=0;

         for(int i=0; i<nums.size();i++){
            if(nums[i]>=target){
                 return i;
                 
            }
            index++;
         }
         return index;
    }
};
int main(){
    solution s;
   int n;
   cout<<"enter the element\n";
   cin>>n;
    vector <int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
    int target;
    cout<<"enter the target\n";
    cin>>target;

    int k=s.searchPosition(nums,target);

    cout<<"position is: "<<k;

    return 0;
}
