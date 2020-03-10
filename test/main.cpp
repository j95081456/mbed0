#include <iostream>

using namespace std;

int factorial(int n);

int main(){
    int n;
    int k;
    cin >> n;
    int a[n];
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<a[i]; j++){
            for (int p=0 ; p<=j ; p++){
            if (j==0 && p==0){ cout << 1;}
            else if (j == p && j!=0){ cout << 1;}
            else {  
                k = factorial(j)/(factorial(j-p)*factorial(p));
                    cout << k << " ";
            }
        }
        cout << endl;
      }
    }


}

int factorial(int n){
    if (n==1 || n==0) return 1;
    else return factorial(n-1)*n;
    
}