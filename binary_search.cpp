/*#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == a[mid]) {
            return mid;
        } else if (key < a[mid]) {
            end = mid - 1;
        } else if (key > a[mid]) { 
            start = mid + 1; 
        }
    }
    return -1; 
}
int main() {
    int a[] = {2, 11, 8, 1, 100, 55}; 
    int n = sizeof(a)/sizeof(a[0]);
    int key = 55;
    sort(a, a+n);
    int result = BinarySearch(a, n, key);
    if (result != -1) {
        cout << "Number is at index: " << result << endl;
    } else {
        cout << "Number not found." << endl;
    }
    return 0;
}*/






#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == a[mid]) {
            return mid;
        } else if (key < a[mid]) {
            end = mid - 1;
        } else if (key > a[mid]) { 
            start = mid + 1; 
        }
    }
    return -1; 
}
int main() {
    int a[] = {3, 7, 14, 16, 25, 36, 42, 100, 150, 162, 189}; 
    int n = sizeof(a)/sizeof(a[0]);
    int key = 7;
    int result = BinarySearch(a, n, key);
    if (result != -1) {
        cout << "Number is at index: " << result << endl;
    } else {
        cout << "Number not found." << endl;
    }
    return 0;
}
 