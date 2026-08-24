/*Missing number in permutation
Given a permutation of n distinct numbers chosen from the range [0,n],
 find the one missing number that does not appear in the array.
 Sample Input
3
2
2 0
4
4 2 1 0
3
1 2 3 */

#include <iostream>
#include <vector>
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        // write your code here
        
       
           
            int n=nums.size();
            int expectedSum= n*(n+1) /2;
            int actualSum=0;
            
            for(int i=0;i<n;i++){
                actualSum+=nums[i];
            }
            
            return expectedSum - actualSum;
          
            }
        
        
    
};
int main(){
    Solution s;
int T;
std::cin>>T;
while(T--){
 int n;
 std::cin>>n;
  std::vector <int> nums(n);
  for(int i=0;i<n;i++){
    std::cin>>nums[i];
  }
  std::cout<<"missing element:"<<s.missingNumber(nums)<<std::endl;
}
}