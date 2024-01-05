#include<bits/stdc++.h>
int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    if(n>=4){

        sort(arr,arr+n);
         return arr[n-4];
    }


    else
     return -2147483648;
}
