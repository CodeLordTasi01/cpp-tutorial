/*#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //creation
    unordered_map<int,string> n;

    //first type of insertion
    pair<int,string> p=make_pair(1,"shubham");
    n.insert(p);

    //second type of insertion
    pair<int,string> p2(2,"anuj");
    n.insert(p2);

    //third type of insertion
    n[3]="tasleem";

    //first type of print
    cout<<n[1]<<endl;

    //second type of print
    cout<<n.at(2)<<endl;

    //third type of print
    for(auto i:n){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    //fourth type of print
    unordered_map<int, string> :: iterator it=n.begin();
    while(it != n.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}*/



/*
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int a[]={1,2,2,1,3,4,3};
    unordered_map<int, int> count;
    for(int num : a){
        count[num]++;
    }
    for(auto i:count){
        cout<<i.first<<"-> "<<i.second<<endl;
    }
}*/




/*#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    string s="ababcdacbe";
    unordered_map<char, int> count;
    for(int a : s){
        count[a]++;
    }
    for(auto i:count){
        cout<<i.first<<"-> "<<i.second<<endl;
    }
}*/



/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}*/



/*
#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    string s="anagram";
    string t="nagaraam";
    unordered_map<char, int> count1;
    unordered_map<char, int> count2;
    for(int a : s){
        count1[a]++;
    }
    for(int b : t){
        count2[b]++;
    }
    if(count1==count2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}*/



/*
//find all disappeared number in an array
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={4,3,2,7,8,2,3,1};
    vector<int> result;
    unordered_map<char, int> count1;
    for(int a : nums){
        count1[a]++;
    }
    for(int i=1; i<=nums.size(); i++){
        if(count1[i]==0){
            result.push_back(i);
        }
    }
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}*/




//find all duplicate element in array
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    vector<int> nums={4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result;
    unordered_map<int, int> count;
    for (int a : nums) {
        count[a]++;
    }
    for (auto it : count) {
        if (it.second>1) {
            result.push_back(it.first);
        }
    }
    for (int i : result) {
        cout<<i<< " ";
    }
}
