#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        vector<int> sortedArr = arr;

        sort(sortedArr.begin(), sortedArr.end());

        return sortedArr[k - 1];
    }
};

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    Solution obj;

    cout << k << "th smallest element is: "
         << obj.kthSmallest(arr, k);

    return 0;
}
