/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double calculateFutureValue(double monthlyInvestment, int years, double rate) {
    double futureValue = 0.0;
    double monthlyRate = rate / 12 / 100; // Convert annual rate to monthly
    for (int year = 0; year < years; ++year) {
        for (int month = 0; month < 12; ++month) {
            futureValue += monthlyInvestment * pow(1 + monthlyRate, (years - year) * 12 - month);
        }
        // Increase investment by 10% for the next year
        monthlyInvestment *= 1.10;
    }
    return futureValue;
}

void displayInvestments(double initialInvestment, int years) {
    cout << "\nInvestment Amount per Month:\n";
    for (int year = 0; year < years; ++year) {
        cout << "Year " << (year + 1) << ": $" << fixed << setprecision(2) << initialInvestment << endl;
        initialInvestment *= 1.10; // Increase by 10% for the next year
    }
}

int main() {
    double initialInvestment;
    int years;
    cout << "Enter the initial monthly investment amount: ";
    cin >> initialInvestment;
    cout << "Enter the number of years for the investment: ";
    cin >> years;
    double futureValue = calculateFutureValue(initialInvestment, years, 12.0);
    cout << "The future value of the SIP after " << years << " years is: $" << fixed << setprecision(2) << futureValue << endl;
    displayInvestments(initialInvestment, years); 
    return 0;
}*/




/*//print same element in array
#include<iostream>
using namespace std;
int main(){
    int a[]={5,8,7,10,56,4,2,11};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }
}*/




/*//print same element in array
#include<iostream>
using namespace std;
void p(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }
}
int main(){
    int a[]={6,5,7,8,4,2,1};
    p(a, 7);
}*/





/*#include<bits/stdc++.h>
using namespace std;
int Maximum(int a[], int n){
    int max = INT8_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int s;
    cin>>s;
    int a[100];
    for(int i=0; i<s; i++){
        cin>>a[i];
    }
    cout<<Maximum(a, s)<<endl;
    return 0;
}*/







/*#include<bits/stdc++.h>
using namespace std;
int Maximum(int a[], int n){
    int maxi = INT8_MIN;
    for(int i=0; i<n; i++){
        maxi=max(maxi, a[i]);
    }
    return maxi;
}
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0; i<s; i++){
        cin>>a[i];
    }
    cout<<Maximum(a, s)<<endl;
    return 0;
}*/





/*
// Largest element in array
#include<iostream>
using namespace std;
int main(){
    int a[]={2,4,3,9,6,7,1};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    cout<<"largest is : "<<largest<<endl;
}
*/




/*// Second largest element in array in O(2N)
#include<iostream>
using namespace std;
int main(){
    int a[]={5,3,8,10,1,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    int slargest=-1;
    for(int j=0; j<n; j++){
        if(a[j]>slargest && a[j]!=largest){
            slargest=a[j];
        }
    }
    cout<<"Second largest is : "<<slargest<<endl;
}*/




/*// second largest element in array in O(N)
#include<iostream>
using namespace std;
int main(){
    int a[]={2,5,8,7,3,6,10,9};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    int slargest=-1;
    for(int i=0; i<n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    cout<<"second largest is : "<<slargest<<endl;
}*/




/*// check if array is sorted
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){

        }
        else {
            return false;
        }
    }
    return true;
}*/




/*// remove duplicate element from array in list if array is sorted
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={1,1,1,2,2,2,2,2,2,3,3,3,4,4,5,5};
    l.unique();
    for(int i:l){
        cout<<i<<" ";
    }
}*/





// remove duplicate element from array in set if array is sorted
/*#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> l={1,10,1,1,2,2,2,8,8,8,2,2,2,3,3,3,4,4,5,5};
    for(int i:l){
        cout<<i<<" ";
    }
}
*/



/*// remove duplicate element from array if array is sorted
#include<iostream>
using namespace std;
int main(){
    int a[]={1,1,1,2,2,2,3,3,3,4,4,4};
    int n=sizeof(a)/sizeof(a[0]);
    int i=a[0];
    for(int j=1; j<n; j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    cout<<"array is : "<<i<<" ";
}*/




/*#include <iostream>
using namespace std;
int main() {
    int a[]={1,1,1,2,2,2,3,3,3,4,4,4};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    for (int j=1; j<n; j++) {
        if (a[i]!=a[j]) {
            i++;  
            a[i] = a[j];
        }
    }
    cout << "sorted array is: ";
    for (int k=0; k<=i; k++) {
        cout << a[k] << " "; 
    }
}*/




/*
// rotate array by one places
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=a[0];
    for(int i=1; i<n; i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    cout<<"Rotate Array is : ";
    for(int k=0; k<n; k++){
        cout<<a[k]<<" ";
    }
}
*/



//check number is palindrome
/*#include<iostream>
using namespace std;
int main(){
    long long int n=111112211111;
    int original=n;
    int sum=0;
    while(n>0){
        int temp=n%10;
        n=n/10;
        sum=sum*10+temp;
    }
    if(original == sum){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
}*/






/*class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int area=0;
        int height;
        for(int i=0; i<n; i++){
            height=heights[i];
            for(int j=i; j<n; j++){
                height=min(height, heights[j]);
                int width=(j-i+1);
                area=max(area, height*width);
            }
        }
        return area;
    }
};*/









/*//find the average of positive integer in array
#include<iostream>
using namespace std;
int main(){
    int a[]={-3,-2,0,0,0,-7,25,12,-11};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            sum=sum+a[i];
            count++;
        }
    }
    if(count>0){
        double average=(double)sum/count;
        cout<<"average of possitive integer is : "<<average<<" ";
    }
}*/




/*//find the average of positive and divide by 3
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,18};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0 && a[i]%3==0){
            sum=sum+a[i];
            count++;
        }
    }
    if(count>0){
        double average=(double)sum/count;
        cout<<"avarage of divide by three is : "<<average<<" ";
    }
}*/






/*// remove all zeros to the end of array
#include<iostream>
using namespace std;
int main(){
    int a[]={4,0,0,5,9,7};
    int n=sizeof(a)/sizeof(a[0]);
    int j=0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }   
    }
    cout<<"removing array list is : ";
    for(int k=0; k<n; k++){
        cout<<a[k]<<" ";
    }
}*/




/*#include<iostream>
using namespace std;
bool y(int a1[], int n, int a2[], int m);
int main(){
    int a1[]={589, 5847, 595, 959, 258};
    int n=sizeof(a1)/sizeof(a1[0]);
    int a2[]={64, 25,343,4,5};
    int m=sizeof(a2)/sizeof(a2[0]);
    bool y1=y(a1, n, a2, m);
    cout<<y;
}
bool y(int a1[], int n, int a2[], int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a1[i]==a2[j]){
                return true;
            }
        }
    }    
    return false;
}*/




/*
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7};
    int s=0;
    int k=a[3];
    int n=sizeof(a)/sizeof(a[0])+1;
    int d=n-k;
    while(s<d){
        int temp=a[s];
        a[s]=a[d];
        a[d]=temp;
        s++;
        d--;
    }
    for(int j=0; j<sizeof(a)/sizeof(a[0]); j++){
        cout<<a[j]<<" ";
    }
}*/



/*
//get min and max element in array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1, 345, 234, 21, 56789};
    int n=sizeof(a)/sizeof(a[0]);
    int minii=a[0];
    int maxii=a[0];
    for(int i=0; i<n; i++){
        minii=min(minii, a[i]);
        maxii=max(maxii, a[i]);
    }
    cout<<minii<<" "<<maxii<<endl;
}
*/




/*
//Armstrong No.
#include <iostream>
using namespace std;
bool isArmstrong(int n) {
    int result = 0, original = n;
    while (original > 0) {
        int rem = original % 10; 
        result += rem * rem * rem;
        original /= 10; 
    }
    return result == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}*/



/*

//Rearrange Array Alternately
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> result;
    int i=0;
    int j=n-1;
    while(i < j){
        result.push_back(a[j]);
        j--;
        result.push_back(a[i]);
        i++;
    }
    if (i == j) {
        result.push_back(a[i]);
    }
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}*/



/*
//Merge two sorted array with O(1) space complexity
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    int b[]={2,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int index=n+m-1;
    int i = n-1;
    int j = m-1;
    while(i>=0 && j>=0){
        if(a[i] >= b[j]){
            a[index] = a[i];
            index--;
            i--;
        }
        else{
            a[index] = b[j];
            index--;
            j--;
        }
    }
    while(j>=0){
        a[index] = b[j];
        index--;
        j--;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}*/



/*
#include<iostream>
using namespace std;
int main(){
    int num = 526;
    int result = 0;
    while(num != 0){
        int digit = num % 10;
        result = result * 10 + digit;
        num = num /10;
    }
    int num2 =  result;
    int result2= 0;
    while(num2 != 0){
        int digit = num2 % 10;
        result2 = result2 * 10 + digit;
        num2 = num2/10;
    }
    if(num == num2){
        cout<<"true";
    }
    else{
        cout<<"false";
    } 
}*/







/*
#include <iostream>
using namespace std;
int main(){
    int a[]={2,6,4,10,3,5,8,10};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    int secondlargest=0;
    for(int i=0; i<n; i++){
        if(a[i] > largest){
            secondlargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > secondlargest){
            secondlargest = a[i];
        }
    }
    cout<<"second largest element is :"<<secondlargest;
    
}





#include <iostream>
#include <algorithm> // For std::reverse and std::swap
using namespace std;

int main() {
    int a[] = {1, 2, 3}; // Fixed array initialization
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = n - 1; i > 0; i--) { // i > 0 to avoid a[-1]
        if (a[i - 1] < a[i]) {
            swap(a[i - 1], a[i]);
            reverse(a + i + 1, a + n); // Correct reverse usage
            break; // Add break to stop after the first valid swap
        }
    }

    // Optional: print the result to verify
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}







#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=22;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            cout<<"not a prime number";
        }
    }
    cout<<"Prime number";
}




//reverse a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="tasleem";
    int start=0;
    int end=s.length()-1;
    while(start<end){
        int temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    for(int j=0; j<s.length(); j++){
        cout<<s[j];
    }
}




#include<iostream>
using namespace std;
int main(){
    string str="Tasleem";
    int n=str.length();
    int end=n-1;
    int start=0;
    while(start < end){
        int temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    for(int i=0; i<n; i++){
        cout<<str[i];
    }
}*/



// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={4,0,0,5,9,7};
//     int n=sizeof(a)/sizeof(a[0]);
//     int j=0;
//     for(int i=0; i<n; i++){
//         if(a[i]!=0){
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             j++;
//         }   
//     }
//     cout<<"removing array list is : ";
//     for(int k=0; k<n; k++){
//         cout<<a[k]<<" ";
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int a[]={1,5,4,2,9};
    int n=sizeof(a)/sizeof(a[0]);
    int k = 3;
    int sum = 0;
    for(int i=0; i<k; i++){
        sum += a[i];   
    }
    int maxSum = sum;
    for(int i = k; i<n; i++){
        sum = sum + a[i] - a[i - k];
        maxSum = max(maxSum, sum);
    }
    cout<<maxSum<<endl;
}