/*//leetcode 443 string compression
#include<iostream>
#include<string>
using namespace std;
int main(){
    char chars[]={'a','a','a','a','a','b'};
    int n=sizeof(chars)/sizeof(chars[0]);
    int index=0;
    int i=0;
    while(i<n){
        char current_char=chars[i];
        int count=0;
        while(i<n && chars[i]==current_char){
            count++;
            i++;
        }
        chars[index] = current_char;
        index++;
        if(count>1){
            string count_string = to_string(count);
            for(char &ch : count_string){
                chars[index] = ch;
                index++;
            }9
        }
    }
    cout<<"Number of index : "<<index<<" "<<endl;
    cout<<"couting of characters : ";
    for(int j=0; j<index; j++){
        cout<<chars[j]<<" ";
    }
}*/




/*//length of given string
#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    cout<<"Length of string : "<<getLength(name)<<endl;   
}*/







/*//reverse a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    char s[]={'t','a','s','l','e','e','m'};
    int start=0;
    int end=sizeof(s)/sizeof(s[0])-1;
    while(start<end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    for(int j=0; j<sizeof(s)/sizeof(s[0]); j++){
        cout<<s[j]<<" ";
    }
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
}*/






/*//check given string is a palindrome
#include <iostream>
#include <string>
using namespace std;
int isPalindrome(string & s){
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}
int main(){
    string s = "ababbba";
    cout << isPalindrome(s) << endl;
    return 0;
}



//convert to lower case and upper case
#include <iostream>
#include <string>
using namespace std;
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
char toUppercase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}
int main(){
    char name[20];
    cout<<"Enter your string : ";
    cin>>name;
    for (int i = 0; name[i] != '\0'; i++) {
        name[i] = toLowercase(name[i]);
    }
    cout<<"converted small case is : "<<name<<endl;
     for (int i = 0; name[i] != '\0'; i++) {
        name[i] = toUppercase(name[i]);
    }
    cout<<"converted upper case is : "<<name<<endl;
}*/




/*
//find maximum occuring character in given string
#include<iostream>
#include<string>
using namespace std;
char getMaxOccChar(string s){
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int number=0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1, ans=0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}
int main(){
    string s;
    getline(cin, s);
    cout<<getMaxOccChar(s)<<endl;
}*/




/*
#include <iostream>
using namespace std;
int main(){
    int a[]={7,9,10,15,12};
    int n=sizeof(a)/sizeof(a[0]);
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (a[j] % 2 == 0) {
            int temp = a[j];
            for (int k = j; k > i; k--) {
                a[k] = a[k - 1];
            }
            a[i] = temp;
            i++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
*/




/*
#include <iostream>
using namespace std;
void reverse(string &s, int begin, int end){
    while(begin < end){
        int temp=s[begin];
        s[begin]=s[end];
        s[begin++];
        s[end--];
    }
}
void rereverse(string &word, int left, int right){
    while(left < right){
        swap(word[left++], word[right--]);
    }
}
int main(){
    string s="Shubham Jhantu hai";
    int n=s.length();
    string ans="";
    reverse(s, 0, s.size()-1);
    for(int i=0; i<n; i++){
        string word="";
        while(i < n && s[i] != ' '){
            word += s[i];
            i++;
        }
        rereverse(word, 0, word.size()-1);
        if(word.length() > 0){
            ans += " "+word;
        }
    }
    cout<<"Reverse String is : "<<ans;
}








/*
//convert roman number to integar
#include <iostream>
using namespace std;
int calculate(char a){
    if(a=='I') return 1;
    else if(a=='V') return 5;
    else if(a=='X') return 10;
    else if(a=='L') return 50;
    else if(a=='C') return 100;
    else if(a=='D') return 500;
    else if(a=='M') return 1000;
}
int main() {
    string s="XL";
    int n=s.length();
    int v1;
    int v2;
    int ans=0;
    for(int i=0; i<n; i++){
        if(i < n-1){
            v1=calculate(s[i]);
            v2=calculate(s[i+1]);
            if(v1 < v2){
                ans = ans - v1;
            }
            else{
                ans = ans + v1;
            }
        }
        else{
            ans=ans+calculate(s[i]);
        }
    }
    cout<<"roman to integar converted answer is : "<<ans;
}
*/















//Following program is a C++ implementation of Rabin Karp
#include <bits/stdc++.h>
using namespace std; 
void search(string pat, string txt, int q)
{
    int M = pat.size();
    int N = txt.size();
    int i, j;
    int p = 0;
    int t = 0; 
    int h = 1;
    int d = 256;
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;
    for (i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
    for (i = 0; i <= N - M; i++) {
        if (p == t) {
            for (j = 0; j < M; j++) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }
            if (j == M)
                cout << "Pattern found at index " << i
                     << endl;
        }
        if (i < N - M) {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
            if (t < 0)
                t = (t + q);
        }
    }
}
int main()
{
    string txt = "GEEKS FOR GEEKS";
    string pat = "GEEK";
    int q = INT_MAX;
    // Function Call
    search(pat, txt, q);
    return 0;
}

