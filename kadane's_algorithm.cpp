/*
// O(n3)
#include <iostream>
using namespace std;
int main() {
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currentSum = 0;
            for (int k = i; k <= j; k++) { 
                currentSum += a[k]; 
            }
            if (currentSum > sum) { 
                sum = currentSum;
            }
        }
    }
    cout << "Maximum subarray sum: " << sum << endl;
}*/




/*
// O(n2)
#include<iostream>
using namespace std;
int main(){
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int currentsum=0;
        for (int j = i; j < n; j++) {
            currentsum=currentsum+a[j];
            if (currentsum > sum) { 
                sum = currentsum;
            }
        }
    }
    cout << "Maximum subarray sum: " << sum << endl;
}
*/




// O(n)
#include<iostream>
using namespace std;
int main(){
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
        maxi=max(maxi, sum);
        if(sum<0){
            sum=0;
        }
    }
    cout << "Maximum subarray sum: " << maxi << endl;
}