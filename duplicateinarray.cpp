#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i!=n-1 && arr[i]==arr[i+1]){
            return arr[i];
            break;
        }
    }
    return -1;
}
