#include<vector>
#include<iostream>
#include<climits>
using namespace std;

vector<int> findMinMax(vector<int>& arr){
    int n= arr.size();
    int mini = INT_MAX , maxi=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]<mini) mini=arr[i];
        if(arr[i]>maxi) maxi=arr[i];
    }
    return{mini,maxi};
}
int main()
{
    vector<int> arr={3,5,6,9,8,7,4,5,1};
    vector<int> result = findMinMax(arr);
    cout<<result[0]<<" "<<result[1]<<endl;
}
