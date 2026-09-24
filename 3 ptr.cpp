# include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 0, 2, 2, 1, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l=0; m=0; h= n-1;
    while (m <= h) {
        if (arr[m] == 0) {
            swap(arr[l], arr[m]);
            l++;
            m++;
        } else if (arr[m] == 2) {
            swap(arr[m], arr[h]);
            h--;
        } else {
            m++;
        }
        return 0;
    }
}