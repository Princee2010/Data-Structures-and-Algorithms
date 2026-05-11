#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        int n = arr.size();
        int mid = 0 ,  high = n-1,  low=0;
        while(mid <= high)
        {
            if(arr[mid]==0){
                 swap(arr[low],arr[mid]);
                  mid++ , low++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[high],arr[mid]);
                high--;
            }
        }
        
    }
};

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements (0, 1, 2 only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.sort012(arr);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

