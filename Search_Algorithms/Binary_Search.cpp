#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (arr[mid] == key) {
            return mid;  //GOT KEY;
        } 
        else if (arr[mid] < key) { 
            st = mid + 1;  // 2ND HALF
        } 
        else { 
            end = mid - 1;  // 1ST HALF
        }
    }

    return -1;  // not found
}

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter the elements";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int loc = binarySearch(arr, n, key);

    if (loc != -1) {
        cout << "The key " << key << " is found at position " << loc + 1 << "." << endl;
    } else {
        cout << "Key not found in the array" << endl;
    }

    return 0;
}
