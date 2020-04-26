/*
バブルソート
1. 配列を後ろから見る
2. 自身の隣接する要素を見比べて大小関係が逆なら交換する
3. 2を大小関係が逆な隣接要素が存在しなくなるまで繰り返す

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

void bubbleSort(int A[], int n){
    bool flag = true;
    int cnt = 0;
    while(flag){
        flag = false;
        for(int j=n-1; j>0; j--){
            if(A[j] < A[j-1]){
                swap(A[j], A[j-1]);
                cnt++;
                flag = true;
            }
        }
    }
    printList(A, n, cnt);
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++) cin >> A[i];
    bubbleSort(A, n);
    return 0;
}