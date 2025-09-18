/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int Arr[]={2,4,5,9,3,5,6};
    int N;
    int K=3;
    if(N<K){
        return -1;
    }
    int i=0,j=0;
    long sum=0, max_sum=INT_MIN;
    while(j<N) {
        sum=sum+Arr[j];
        if((j-i+1)<K){
            j++;
        }
        else if(j-i+1==K){
            max_sum=max(max_sum,sum);
            sum-=Arr[i];
            i++;
            j++;
        }
    }
    return max_sum;
}*/



/*
//get maximum point of cards
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int k = n-4;
    int leftsum = 0;
    int rightsum = 0;
    int maxsum = 0;
    for (int i = 0; i < k; i++) {
        leftsum += a[i];
    }
    maxsum = leftsum;
    int rightindex = n - 1;
    for (int i = k - 1; i >= 0; i--) {
        leftsum -= a[i];
        rightsum += a[rightindex];
        rightindex--;
        maxsum = max(maxsum, leftsum + rightsum);
    }
    cout << maxsum << " ";
    return 0;
}
*/





