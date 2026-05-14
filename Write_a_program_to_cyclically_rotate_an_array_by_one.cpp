#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


class Solution {
  public:
    void rotate(vector<int> &arr) {

        int n = arr.size();
        
        if(n <= 1) return;   
        
        int last = arr[n - 1];  
        
        for(int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[0] = last;   
    
    }
};



int main() {

    int n;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    Solution obj;

    vector<int> ans = obj.rotate(arr);

}

