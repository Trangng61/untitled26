#include <iostream>
using namespace std;

void lastIndex (int arr[], int n, int key) {
    int end = -1;
    for (int i = n -1; i >= 0; i--) {
        if (arr[i] == key) {
            end = i;
            break;
        }
    }
    if (end == -1)
        cout << "0" << endl;

    else
        cout << end + 1 << endl;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter sequence: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    lastIndex(a, n, key);
    return 0;
}
