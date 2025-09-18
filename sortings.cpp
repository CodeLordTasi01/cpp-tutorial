/*
//Bubble Sort
#include <iostream>
using namespace std;
void BubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
void PrintArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={28, 6, 4, 2, 24};
    int n=sizeof(a)/sizeof(a[0]);
    BubbleSort(a, n);
    cout<<"Array is : ";
    PrintArray(a, n);
}*/








//Insertion sort
#include <iostream>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j] > key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void PrintArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={28, 6, 4, 2, 24};
    int n=sizeof(a)/sizeof(a[0]);
    InsertionSort(a, n);
    cout<<"Sorted Array is : ";
    PrintArray(a, n);
}