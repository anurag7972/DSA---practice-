#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums){
    int N=nums.size();
    int strike=0;
    int Max=0;

    for(int i=0;i<N;i++){
        if(nums[i]==1){
            strike++;
            Max=max(Max,strike);
        }
        else{
            strike=0;
        }
    }
    return Max;

};