#include <bits/stdc++.h> 
#include <vector>
#include<iostream>
using namespace std;
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int i=0,j=n-1;
    while(i<m && j>=0){
//         cout<<mat[i]<<mat[j]<<i<<j<<endl;
        if(mat[i][j]==target){return true;break;}
        else if(mat[i][j]>target){j--;}
        else{i++;}
    }
    return false;
}