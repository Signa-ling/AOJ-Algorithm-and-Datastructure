/*
選択ソート
・以下の処理をn-1回繰り返す
  1. 未ソート部分から最小の要素の位置minjを特定
    ex)[5,4,8,7,9,3,1]であればminjは最小要素1のある位置6
  2. minjの位置にある要素と未ソート部分の先頭要素を交換
    ex)上記例であれば未ソート先頭の5と入れ替え
  3. ソート済み要素が1増える
  　ex)[1,|4,8,7,6,9,3,5] ※|より左はソート済みを示す

このソートは安定なソートでは無い
計算量: O(N^2)
*/

#include <bits/stdc++.h>  
using namespace std;

void printList(int A[], int n, int cnt){
    for(int i=0; i<n; i++){
        if(i>0) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
}

void selectionSort(int A[], int n){
    int cnt = 0;
    for(int i=0; i<n; i++){
        int minj = i;
        for(int j=i; j<n; j++){
            if(A[j] < A[minj]) minj = j;
        }
        if(i!=minj) cnt++;
        swap(A[i], A[minj]);
    }
    printList(A, n, cnt);
}


int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++) cin >> A[i];
    selectionSort(A, n);
    return 0;
}