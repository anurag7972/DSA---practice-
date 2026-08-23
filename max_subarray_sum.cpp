#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        long long x;
        cin >> x;
        long long sum = x;
        long long Max = x;
        for(int i = 1; i < N; i++) {
            cin >> x;

            sum = max(x, sum + x);
            Max = max(Max, sum);
        }
        cout << Max << endl;
    }
}