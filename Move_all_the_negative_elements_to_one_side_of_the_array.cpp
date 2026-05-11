#include <bits/stdc++.h>
using namespace std;

vector<int> move(vector<int> &arr)
{
    int cnt = 0;
    for(auto num: arr){
        if (num<0) cnt++;
    }

    int i=0;
    for(int  j=0; j<cnt;j++){
        while(i<arr.size() && arr[i]>=0) i++;

        swap(arr[j], arr[i]);
        i++;
    }
    return arr;
}

int main() {
    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    vector<int> ans = move(arr);
    
    for (auto num: ans) {
        cout << num << "" "";
    }
    cout<<endl;

    return 0;
}