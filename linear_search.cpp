#include <iostream>
#include <vector>
int main(){
    int N,search;
    std::cout<<"enter the size of array\n";
    std::cin>>N;
    std::vector<int> arr(N);

     std::cout<<"enter  the array element\n";
   
 for(int i=0;i<N;i++){
   
    std::cin>>arr[i];
 }

 std::cout<<"Enter the searching element\n";
 std::cin>>search;
 bool found=false;
  for(int i=0;i<N;i++){
    if(arr[i]==search){
        found=true;
        break;
    }
  }
  if(found){
    std::cout<<"element:"<<search<<":is found\n";
  }else{
    std::cout<<"element:"<<search<<": not found\n";
  }
  
  return 0;
}