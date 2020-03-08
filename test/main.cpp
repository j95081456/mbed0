#include <stdio.h>
#include <iostream>

using namespace std;

int search(int *a , int n , int target);

int main(void){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
    cin >> a[i];
    }
    int t;
    cin >> t;
    int i = search(a,n,t);
    cout << a[i];
    return 0;
}

int search(int *a , int n , int target){
     int middle;
     int left = 0;
     int right = n-1;
   while (left<=right){
       middle = (left + right)/2;
       if(target < a[middle]){
           right = middle - 1;
       }else if (target > a[middle]){
           left = middle + 1;
       }
       else return middle;
   }
   return -1 ;
}