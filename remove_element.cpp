// #include <iostream>
// #include <vector>
// using namespace std;

// int removeElement(vector<int>& nums, int val) {
//     int K = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] != val) {
//             nums[K] = nums[i];
//             K++;
//         }
//     }   

//     return K;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> nums(N);

//     for (int i = 0; i < N; i++) {
//         cin >> nums[i];
//     }
//     int val;
//     cin >> val;
//     int K = removeElement(nums,val);

//     cout << K << endl;

//     for (int i = 0; i < K; i++) {
//         cout << nums[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
    int index=2;
    if(index<0 || index > 8){
        cout<<"invalid index";
       
    }
     for(int i=index; i<n-1; i++){
        arr[i]=arr[i+1];
     }
     n--;
      cout<<"array after deleting the elment\n";
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     
}