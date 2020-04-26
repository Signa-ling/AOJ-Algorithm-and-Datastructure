#include <bits/stdc++.h>  
using namespace std;


struct Card{
    char pattern, num;
};

void bubbleSort(struct Card A[], int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i+1; j--){
            if(A[j].num < A[j-1].num){
                swap(A[j], A[j-1]);
            }
        }
    }
}

void selectionSort(struct Card A[], int n){
    for(int i=0; i<n; i++){
        int minj = i;
        for(int j=i; j<n; j++){
            if(A[j].num < A[minj].num) minj = j;
        }
        swap(A[i], A[minj]);
    }
}

void printList(struct Card A[], int n){
    for(int i=0; i<n; i++){
        if(i>0) cout << " ";
        cout << A[i].pattern << A[i].num;
    }
    cout << endl;
}

bool isStable(struct Card A[], struct Card A2[], int n){
    for(int i=0; i<n; i++) if(A[i].pattern!=A2[i].pattern) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    Card A1[n], A2[n];
    for(int i=0; i<n; i++) cin >> A1[i].pattern >> A1[i].num;
    for(int i=0; i<n; i++) A2[i] = A1[i];
    bubbleSort(A1, n);
    selectionSort(A2, n);

    
    printList(A1, n);
    cout << "Stable" << endl;
    printList(A2, n);
    if(isStable(A1, A2, n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    return 0;
}