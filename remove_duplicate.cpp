#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int K = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
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

    int K = removeDuplicates(nums);

    cout << K << endl;

    for (int i = 0; i < K; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}