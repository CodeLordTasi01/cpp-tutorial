/*#include<iostream>
#include<array>
#include<list>
#include<vector>
#include<deque>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    for(int i:l){
        cout<<i<<endl;
    }
    l.pop_back();
    for(int i:l){
        cout<<i<<endl;
    }
    l.push_front(3);
    for(int i:l){
        cout<<i<<endl;
    }
    vector<int> v;
    v.push_back(10);
    for(int i:v){
        cout<<i<<endl;
    }
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    for(int i:d){
        cout<<i<<endl;
    }
    d.pop_front();
    for(int i:d){
        cout<<i<<endl;
    }
}






#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> maxi;
    maxi.push(10);
    maxi.push(8);
    maxi.push(9);
    maxi.push(15);
    int n=maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
}*/





/*#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>,greater<int>> min;
    min.push(10);
    min.push(8);
    min.push(9);
    min.push(15);
    int n=min.size();
    for(int i=0; i<n; i++){
        cout<<min.top()<<" ";
        min.pop();
    }
}*/




#include<iostream>
using namespace std;
void selection(int a[], int n){
    for(int i=0; i<=n-2; i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
        int temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
    }
}
int main(){
    int a[]={13,46,40,9,54,1,7,5,6,2,100};
    int n=sizeof(a)/sizeof(a[0]);
    selection(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}




