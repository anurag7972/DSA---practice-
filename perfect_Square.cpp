#include <iostream>
using namespace std;

bool isPerfectSquare(int nums){

   int start=0;
   int end=nums;
   if(nums<0) return false;

   if(nums==0 || nums==1) return true;

   while(start<=end){

      int mid= start +( end -start) /2;
      int square= mid * mid;

      if(square==nums){
         return true;
      }
      else if(square<nums){
         start= mid+1;
      }else{
         end=mid-1;
      }
   }
   return false;
};
int main(){
   
   int n;
   cout<<"enter the square\n";
   cin>>n;
   
    int k=isPerfectSquare(n);

    if(!k){
      cout<<"the square is not perfect\n";
    
    }else{
      cout<<"the square is perfect\n";
    }

}