#include <iostream>

using namespace std;

void print (int a[], int cn);
void permutation(int a[], int n , int cn);

int count = 0;

int main(){
    int n;
    cin >> n;
    int cn = n;
    int a[n];
    for (int i=0; i < n; i++){
        a[i]=i+1;
    }
    permutation(a,n,cn);
    cout << "count" << count;
}

void permutation(int a[], int n , const int cn){
    if (n==1) {
        count++ ;
        print(a,cn);
    }
    else {
        for (int i=0; i<n ; i++){
            swap(a[n-1],a[i]);
            permutation(a,n-1,cn);
            swap(a[n-1],a[i]);
        }
    }

}

void print (int a[], int cn){
     for (int i=cn-1; i >= 0; i--){
        cout << a[i] ;
    }
    cout << endl;
}