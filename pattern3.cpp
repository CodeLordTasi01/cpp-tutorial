/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count<<" ";
        }
        count=count+1;
        cout<<endl;
    }
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=0; j<=i; j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        int c=1;
        for(int j=0; j<n-i+1; j++){
            cout<<c<<" ";
            c=c+1;
        }
        cout<<endl;
    }
    return 0;
}*/






/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/



/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int a=1; a<=1; a++){
            cout<<"* ";
        }
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"* ";
        }
        for(int l=i; l<n; l++){
            cout<<"  ";
        }
        for(int m=1; m<=1; m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"*";
        }
        for(int l=2; l<2*i; l++){
            cout<<" ";
        }
        for(int m=i; m<=n; m++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int o=1; o<=n; o++){
        for(int p=1; p<=o; p++){
        cout<<"*";
        }
        for(int q=1; q<2*(n-o)+1; q++){
            cout<<" ";
        }
        for(int r=1; r<=o; r++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/




/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool isprime=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Number is not prime";
    }
    else{
        cout<<"Number is prime";
    }
    return 0;
}*/






/*#include <iostream>
using namespace std;
int fact(int r) {
    int mul = 1;
    for (int i = 1; i <= r; i++) {
        mul *= i;
    }
    return mul;
}

int main() {
    int n;
    int sum = 0;
    cin >> n;
    int k = n;
    int r;

    while (k != 0) {
        r = k % 10;
        int f = fact(r);
        k = k / 10;
        sum += f;
    }

    if (sum == n) {
        cout << "\nNumber is a strong";
    } else {
        cout << "\nNumber is not a strong";
    }

    return 0;
}*/





/*#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void pre(struct node* root){
    if(root != NULL){
        cout<<root->data<<" ";
        pre(root->left);
        pre(root->right);
    }
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    pre(root);
    return 0;
}*/





/*#include<iostream>
using namespace std;
struct node{
    char data;
    struct node* left;
    struct node* right;
    node(char val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(struct node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main(){
    struct node* root=new node('A');
    root->left=new node('B');
    root->right=new node('C');
    root->left->left=new node('D');
    root->left->right=new node('E');
    root->right->left=new node('F');
    inorder(root);
    return 0;
}*/



/*#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void post(struct node* root){
    if(root != NULL){
        post(root->left);
        post(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    post(root);
    return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
int recur(int n){
    if(n<9){
        return n;
    }
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return recur(sum);
}
int main(){
    int n=989898;
    int a=recur(n);
    cout<<a;
}*/




#include<iostream>
using namespace std;
int main(){
    int n=234;
    int sum=0;
    int div=1;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit;
        div=div*digit;
    }
    int ans=div-sum;
    cout<<ans;
}




