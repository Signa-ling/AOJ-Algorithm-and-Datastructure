#include <bits/stdc++.h>  
using namespace std;

void printList(int A[], int n){
    for(int k=0; k<n; k++){
        if(k>0) cout << " ";
        cout << A[k];
    }
    cout << endl;
}

void insertionSort(int A[], int n){
    for(int i=1; i<=n-1; i++){
        int v = A[i];
        int j = i - 1;
        while(j>=0 && A[j]>v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        printList(A, n);
    }
} 

int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++) cin >> A[i];
    printList(A, n);
    insertionSort(A, n);
    return 0;
}