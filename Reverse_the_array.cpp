#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr){
    int l =0 , r = arr.size()-1;

    while(l<r){
        swap(arr[l],arr[r]);

        l++;
        r--;
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    
    reverseArray(arr);

    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<"" "";
    }
    return 0;
}