/*#include<iostream>
using namespace std;
int main(){
    int a[]={2,3,9,6,5};
    int *p1=a;
    int *p2=a+5;
    cout<<(p2-p1)<<" ";
    cout<<(char*)p2-(char*)p1<<endl;
}*/




/*#include<iostream>
using namespace std;
int main(){
    int a[]={8,4,9,2,3,7};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    cout<<largest<<" ";
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a[]={2,2,3,4,4,5,6,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                j--;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}



#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,8,6,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=14;
    int MaxLength=0;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum=sum+arr[j];
            if(sum <= k){
                MaxLength=max(MaxLength, j-i+1);
            }
            else if(sum>k){
                break;
            }
        }
    }
    cout<<MaxLength<<" ";
}*/






#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 7, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 14;
    int l = 0, r = 0, sum = 0;
    int MaxLength = 0;

    while (r < n) {
        // Add the current right element to the sum
        sum += arr[r];

        // Move the left pointer to maintain the sum <= k
        while (sum > k && l <= r) {
            sum -= arr[l];
            l++;
        }

        // Calculate the maximum length of the valid subarray
        if (sum <= k) {
            MaxLength = max(MaxLength, r - l + 1);
        }
        r++; // Move the right pointer to the next element
    }

    cout << MaxLength << " ";
    return 0;
}
