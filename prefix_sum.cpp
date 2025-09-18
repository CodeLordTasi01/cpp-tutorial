/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1; i<n; i++){
        a[i]=a[i]+a[i-1];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}*/





/*
//Divide array in 2 subarray with equal sum = O(n2)
#include<bits/stdc++.h>
using namespace std;
int DivideArrayequalsum(int a[], int n){
    for(int i=0; i<n-1; i++){
        int sum1=0; 
        int sum2=0;
        for(int j=0; j<=i; j++){
            sum1+=a[j];
        }
        for(int j=i+1; j<n; j++){
            sum2+=a[j];
        }
        if(sum1==sum2){
            return 1;
        }
    }
    return 0;
}
int main(){
    int a[]={3,4,-2,5,8,20,-10,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<DivideArrayequalsum(a,n);
}
*/




//Divide array in 2 subarray with equal sum = O(n)
#include<bits/stdc++.h>
using namespace std;
int DivideArrayequalsum(int a[], int n){
    int totalsum=0;
    for(int i=0; i<n; i++){
        totalsum += a[i];
    }
    int prefix=0;
    for(int i=0; i<n-1; i++){
        prefix += a[i];
        int ans=totalsum - prefix;
        if(ans == prefix){
            return 1;
        }
    }
    return 0; 
}
int main(){
    int a[]={3,4,-2,5,8,20,-10,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<DivideArrayequalsum(a,n);
}