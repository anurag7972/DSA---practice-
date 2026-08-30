#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int K = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[K] = nums[i];
            K++;
        }
    }   

    return K;
}

int main() {
    int N;
    cin >> N;

    vector<int> nums(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    int val;
    cin >> val;
    int K = removeElement(nums,val);

    cout << K << endl;

    for (int i = 0; i < K; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}