#include <iostream>
using namespace std;

char nextgreatercharacter(char ch[], int n, char target, bool &found) {

    for (int i = 0; i < n; i++) {

        if (ch[i] > target) {
            found = true;
            return ch[i];
        }
    }

    // No greater element found
    found = false;
    return ch[0];
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    char ch[n];

    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        cin >> ch[i];
    }

    char value;

    cout << "Enter the target character: ";
    cin >> value;

    bool found;

    char k = nextgreatercharacter(ch, n, value, found);

    if (!found) {
        cout << "No greater element found." << endl;
        cout << "Returning first element: " << k << endl;
    }
    else {
        cout << " The next greatest character: " << k << endl;
    }

    return 0;
}