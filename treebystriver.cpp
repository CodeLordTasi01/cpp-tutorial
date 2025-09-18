/*#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* Tree(node* root){
    int data;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left:"<<data<<endl;
    root->left=Tree(root->left);
    cout<<"Enter data for inserting in right:"<<data<<endl;
    root->right=Tree(root->right);
    return root;
}
void Display(node* root){
    if(root==NULL){
        return;
    }
    Display(root->left);
    cout<<root->data;
    Display(root->right);
}
int main(){
    node* root=Tree(root);
    Display(root);
    //1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1
    cout<<endl;
    Tree(root);
    return 0;
}*/






/*#include<iostream>
using namespace std;
class node{
public:
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* pre(struct node* root){
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
class node{
public:
    char data;
    struct node* left;
    struct node* right;
    node(char val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* inorder(struct node* root){
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





#include<iostream>
using namespace std;
class node{
public:
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* post(struct node* root){
    if(root != NULL){
        post(root->left);
        post(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    struct node* root=new node(8);
    root->left=new node(1);
    root->right=new node(9);
    root->left->right=new node(2);
    root->left->right->right=new node(4);
    root->left->right->right->left=new node(3);
    root->left->right->right->right=new node(6);
    root->left->right->right->right->left=new node(5);
    post(root);
    return 0;
}




/*#include <iostream>
#include <vector>

int calculate(int r, int unit, const std::vector<int>& arr, int n) {
    if (arr.empty() || n == 0) {
        return -1;
    }

    int totalFoodRequired = r * unit;
    int foodTillNow = 0;

    for (int house = 0; house < n; ++house) {
        foodTillNow += arr[house];
        if (foodTillNow >= totalFoodRequired) {
            return house + 1;  // Return 1-based index
        }
    }
    
    return 0;  // If total food is never reached
}

int main() {
    int r, unit, n;
    
    std::cout << "Enter number of rats: ";
    std::cin >> r;
    
    std::cout << "Enter the value of units: ";
    std::cin >> unit;
    
    std::cout << "Number of elements in array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "List elements (space separated): ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = calculate(r, unit, arr, n);
    std::cout << result << std::endl;

    return 0;
}
*/



/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}*/




/*
#include<iostream>
using namespace std; 
int main(){
    int n= 5;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=1; j<=n-i; j++){
            c=c+1;
            cout<<c;
        }
        for(int k=0; k<i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    int z=5;
    for(int l=0; l<z; l++){
        for(int m=1; m<=l; m++){
            cout<<"*";
        }
        int f=6;
        for(int s=1; s<=z-l; s++){
            f=f-1;
            cout<<f;
        }
        cout<<endl;
    }
}
*/