#include <iostream>
using namespace std;
int squareroot(int n){

     int left=0;
     int right=n;
   int square;
     while(left<right){

        int mid= (left+right)/2;
          square=mid * mid;

        if(square==n){
            return mid;
        }else if(square>mid){

            left=mid+1;
            
        }else{
            right=mid-1;
        }


     }
     return square;
};
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;

    int square= squareroot(n);

    cout<<"the square root of number:"<<n<<"is:"<<square<<endl;
}