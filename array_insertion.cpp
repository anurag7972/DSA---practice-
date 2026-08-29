#include <iostream>
using namespace std;

int main() {
    int arr[10] = {7, 8, 9, 1, 5};
    int n = 5;
    int index = 2;
    int x = 5;

    if (index < 0 || index > n) {
        cout << "Invalid index";
        return 0;
    }
       // shifting element to the right
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
     // insert the element
    arr[index] = x;
    n++;
           // displying the array
    cout << "Array after insertion: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

