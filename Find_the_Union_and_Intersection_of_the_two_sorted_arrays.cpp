#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {

        unordered_set<int> st;

        for (int x : a) {
            st.insert(x);
        }

        for (int x : b) {
            st.insert(x);
        }

        vector<int> result(st.begin(), st.end());

        return result;
    }
};

int main() {

    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> b(m);

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    Solution obj;

    vector<int> ans = obj.findUnion(a, b);

    cout << "Union of arrays: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}