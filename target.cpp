// // # include <iostream>
// // using namespace std;
// // int main() {
// //     int arr[] = {10,20,30,40,50,60,70,80};
// //     int target = 70;
// //     int n = sizeof(arr)/sizeof(arr[0]);
// //     int low = 0;
// //     int high = n - 1;
// //     int mid;

// //     while (low <= high) {
// //         mid = (low + high) / 2;
// //         if (arr[mid] == target) {
// //             cout << "Element found at index " << mid << endl;
// //             return 0;
// //         }
// //         else if (arr[mid] < target) {
// //             low = mid + 1;
// //         }
// //         else {
// //             high = mid - 1;
// //         }
// //     }
// //     cout << "Element not found" << endl;
// //     return 0;
// // }
// # include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {10,20,30,40,50,60,70,80};
//     int target = 70;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int low = 0;
//     int high = n - 1;
//     int mid;
// bool found = false;
//     while (low <= high) {
//         mid = (low + high) / 2;
//         if (arr[mid] == target) {
//             cout << "Element found at index " << mid << endl;
//             found = true;
//             return 0;
//         }
//         else if (arr[mid] < target) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     if (!found) {
//         cout << "Element not found" << endl;
//     }
//     else {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }
# include <iostream>
using namespace std;
int main() {
    int maxsum = arr[0];
    int arrsum = 0;
    for (int i = 0; i < n; i++) {
        arrsum += arr[i];
        if (arrsum > maxsum) {
            maxsum = arrsum;
        }
        if (arrsum < 0) {
            arrsum = 0;
        }
    }
    cout << "Maximum sum of contiguous subarray is " << maxsum << endl;
    return 0;
}