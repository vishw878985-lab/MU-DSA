#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[6] = {8, 6, 4, 5, 7, 9};

    int largest = arr[0];
    int second = INT_MIN;

    for (int i = 1; i < 6; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second Largest = " << second << endl;
    return 0;
}