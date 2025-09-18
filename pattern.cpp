/*#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    int coun=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<coun-j+1<<" ";
            coun=coun+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}



#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"number is not prime";
            break;
        }
        else{
            i+=1;
        }
    }
    if(i==n){
        cout<<"prime number";
    }
    return 0;
}




#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        break;
        i=i+1;
    }
}





#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=2;
    if(n%i==0)
    {
        cout<<"No is not prime";
        i=i+1;
    }
    else{
        cout<<"No is prime";

    }
}*/



/*
#include<iostream>
using namespace std;
int main() {
    int n=2,s=0,n1=100;
    while(n1>n){
        int i=2;
        while(i<n)
        {
            if(n%i==0)
            {
                cout<<"number is not prime "<<n<<endl;
                break;
            }
            else{
                i+=1;
            }
        }
        if(i==n){
            cout<<"prime number "<<n<<endl;
            s=s+1;
        }
        n=n+1;
    }
    cout<<s;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}





#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        while(j){
            cout<<" ";
            j=j-1;
        }
        int k=1;
        while(k<=i){
            cout<<k;
            k=k+1;
        }
        int l=i-1;
        while(l){
            cout<<l;
            l=l-1;
        }
        cout<<endl;
        i=i+1;
    }
}



#include<iostream>
using namespace std;
int main() {
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=10; i += 1){
        int k=a+b;
        cout<<k<<" ";
        a=b;
        b=k;
        k=a;
    }
}



//convert decimal to binary
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit * pow(10,i)) +ans;
        n=n>>1;
        i=i+1;
    }
    cout<<ans<<" "<<endl;
}

//convert binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2, i);
        }
        n=n/10;
        i=i+1;
    }
    cout<<ans<<" "<<endl;
}



#include <iostream>
using namespace std;
float fact(float n){
    float fact=1;
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
float nCr(float n, float r){
    float a=fact(n);
    float b=fact(r)*fact(n-r);
    float c=a/b;
    return c;
}
int main(){
    float n, r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
}



#include <iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    int fact1=1;
    int fact3=1;
    for (int i=1; i<=n; i++){
        fact1=fact1*i;}
        int fact2=1;
    for (int j=1; j<=r; j++){
        fact2=fact2*j;}
    for (int k=1; k<=n-r; k++){
        fact3=fact3*k;}
    int a=fact1;
    int b=(fact2)*(fact3);
    int c=a/b;
    cout<<c;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main() {
    long long int a=0;
    long long int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=100; i += 1){
        long long int k=a+b;
        cout<<k<<" ";
        a=b;
        b=k;
        k=a;
    }
}*/
/*
int fibonacci()
{
    int a=0;
    int b=1;
    printf("%d %d ",a,b);
    for(int i=1; i<=10; i++)
    {
        int k=a+b;
        printf("%d ",k);
        a=b;
        b=k;
        k=a;
    }
}
int main()
{
    int result=fibonacci();
    printf("%d",result);

}




#include<iostream>
using namespace std;
int main() {
    int n=2,s=0,n1=100000;
    while(n1>n){
        int i=2;
        while(i<n)
        {
            if(n%i==0)
            {
                cout<<"number is not prime "<<n<<endl;
                break;
            }
            else{
                i+=1;
            }
        }
        if(i==n){
            cout<<"prime number "<<n<<endl;
            s=s+1;
        }
        n=n+1;
    }
    cout<<s;
    return 0;
}*/





/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        int c=1;
        for(int j=i+1; j>0; j--){
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }
    return 0;
}*/




/*#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=1; i<=5; i++){
        for(int j=i; j<5; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/





