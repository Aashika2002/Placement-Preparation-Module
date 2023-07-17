#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max= arr[0];
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        if(arr[*it]>max)
          max= arr[*it];
        else
        continue;
    }
    cout<<max;
}
