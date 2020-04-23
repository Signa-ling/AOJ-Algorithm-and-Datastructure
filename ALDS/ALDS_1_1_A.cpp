/*
挿入ソート
1. 先頭の要素をソート済みとする
2. 未ソート部分の先頭から要素を1つ取り出しvに記録
3. ソート済みの部分において、vより大きい要素を後方へ1つずつ移動
4. 最後に空いた位置にvを挿入
5. 2~5を未ソート部分が無くなるまで繰り返す
*/

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