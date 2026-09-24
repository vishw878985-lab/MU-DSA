#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original = n;   // original number save kar liya
    int reverse = 0;

    while(n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << "Original = " << original << endl;
    cout << "Reverse = " << reverse;

    return 0;
}