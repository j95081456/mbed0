#include <stdio.h>
#include <iostream>

using namespace std;

void print(int num);

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0 ; i<n; i++){
        cin >> a[i];
    }
    for (int i=0 ; i<n ; i++){
        print(a[i]);
    }
}

void print(int num){
    int a[num][num];
    for(int i=0; i<num; i++){
        for (int j=0; j<=i; j++){
            if(j==0 || j==i){
               a[i][j]=1;
               if (j==0) cout << 1;
               else cout << " " << 1;
            }
            else {
                a[i][j]=a[i-1][j-1] + a[i-1][j];
                cout << " " <<a[i][j];
            }
        }
        cout << endl;
    }
}