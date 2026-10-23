Q.no.1:- The Missing Seat Number

// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int missingNumber(vector<int>& nums) {
// // // // //     int n = nums.size();
// // // // //     int expectedSum = n * (n + 1) / 2;  // sum of 0..n
// // // // //     int actualSum = 0;
// // // // //     for (int num : nums) {
// // // // //         actualSum += num;
// // // // //     }
// // // // //     return expectedSum - actualSum;
// // // // // }

// // // // // int main() {
// // // // //     vector<int> nums1 = {3, 0, 1};
// // // // //     cout << "Missing number: " << missingNumber(nums1) << endl; // Output: 2

// // // // //     vector<int> nums2 = {0, 1};
// // // // //     cout << "Missing number: " << missingNumber(nums2) << endl; // Output: 2

// // // // //     return 0;
// // // // // }


Q.no.2:-Find the Best Pair of Students
// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <unordered_map>
// // // // using namespace std;

// // // // vector<int> twoSum(vector<int>& scores, int target) {
// // // //     unordered_map<int, int> seen; // value -> index
// // // //     for (int i = 0; i < scores.size(); i++) {
// // // //         int complement = target - scores[i];
// // // //         if (seen.find(complement) != seen.end()) {
// // // //             return {seen[complement], i};
// // // //         }
// // // //         seen[scores[i]] = i;
// // // //     }
// // // //     return {}; // should never reach here since one solution exists
// // // // }

// // // // int main() {
// // // //     vector<int> scores1 = {2, 7, 11, 15};
// // // //     int target1 = 9;
// // // //     vector<int> result1 = twoSum(scores1, target1);
// // // //     cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;

// // // //     vector<int> scores2 = {3, 2, 4};
// // // //     int target2 = 6;
// // // //     vector<int> result2 = twoSum(scores2, target2);
// // // //     cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;

// // // //     return 0;
// // // // }


Q.no.3:- Find the Second-Highest Score
// // // #include <iostream>
// // // #include <vector>
// // // #include <climits>
// // // using namespace std;

// // // int secondHighest(vector<int>& scores) {
// // //     int largest = INT_MIN;
// // //     int second = INT_MIN;

// // //     for (int score : scores) {
// // //         if (score > largest) {
// // //             second = largest;
// // //             largest = score;
// // //         } else if (score < largest && score > second) {
// // //             second = score;
// // //         }
// // //     }

// // //     return (second == INT_MIN) ? -1 : second;
// // // }


Q.no.4:- Find the First Unique Letter
// // // int main() {
// // //     vector<int> scores1 = {
// //     #include <iostream>
// //     #include <string>
// //     #include <vector>
// //     using namespace std;
    
// //     int firstUniqueChar(string code) {
// //         vector<int> freq(26, 0);
    
// //         // Count frequency of each character
// //         for (char c : code) {
// //             freq[c - 'a']++;
// //         }
    
// //         // Find first unique character
// //         for (int i = 0; i < code.size(); i++) {
// //             if (freq[code[i] - 'a'] == 1) {
// //                 return i;
// //             }
// //         }
    
// //         return -1;
// //     }
    
// //     int main() {
// //         string code1 = "leetcode";
// //         cout << "First unique index: " << firstUniqueChar(code1) << endl; // Output: 0
    
// //         string code2 = "loveleetcode";
// //         cout << "First unique index: " << firstUniqueChar(code2) << endl; // Output: 2
    
// //         string code3 = "aabb";
// //         cout << "First unique index: " << firstUniqueChar(code3) << endl; // Output: -1
    
// //         return 0;
// //     }


Q.no.5:- Find the First Repeated Roll Number
// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// bool hasDuplicate(vector<int>& rollNumbers) {
//     unordered_set<int> seen;
//     for (int num : rollNumbers) {
//         if (seen.find(num) != seen.end()) {
//             return true; // duplicate found
//         }
//         seen.insert(num);
//     }
//     return false; // no duplicates
// }

// int main() {
//     vector<int> rollNumbers1 = {1, 2, 3, 1};
//     cout << (hasDuplicate(rollNumbers1) ? "true" : "false") << endl; // Output: true

//     vector<int> rollNumbers2 = {1, 2, 3, 4};
//     cout << (hasDuplicate(rollNumbers2) ? "true" : "false") << endl; // Output: false

//     vector<int> rollNumbers3 = {1, 1, 1, 3, 3, 4 


Q.no.6:- The Best Buy-and-Sell Day
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price; // update lowest price
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice; // update profit
        }
    }

    return maxProfit;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4