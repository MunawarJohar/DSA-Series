#include<iostream>
#include<vector>
using namespace std;

int main() {
int n=5;
int arr[5]={2,4,5,2,3};
for(int st=0;st<n;st++){
 for(int end=st;end<n;end++){
 for(int i=st;i<end;i++){
 cout<<arr[i];
 }
 cout<<" ";
 }
 cout<<endl;
}

// brute force approach 
int maxSum=INT_MIN;
for(int st=0;st<n;st++){
 int currentsum=0;
 for(int end=st;end<n;end++){
 currentsum+=arr[end];
 maxSum=max(currentsum,maxSum);
 }
 cout<<endl;
}

cout<<"\n Maximum sum "<<maxSum;

// kadene's Algorithm approach leetcode 53. maximum sub array
int maximumSum=INT_MIN;
for(int st=0;st<n;st++){
 int currentsum=0;
  currentsum+=arr[st];
 maximumSum=max(currentsum,maximumSum);
 if (currentsum<0){
  currentsum=0;
 }
 }
 cout<<"\n Kadene's Algorithm sub array sum: "<<maximumSum;


  return 0;
}

