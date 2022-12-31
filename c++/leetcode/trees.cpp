#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

//same tree

 struct Trienode{
    Trienode *child[26];
    bool end = false;
};

Trienode * newnode(){
    Trienode * temp = new Trienode();
    temp->end = false;
    for(int i = 0; i<26; i++){
        temp->child[i] = NULL;
    }
    return temp;
}
Trienode * root = NULL;
class Trie {
public:
    Trie() {
        root = newnode();
    } 

    void insert(string word) {
        int size = word.size();
        Trienode * temp = root;
        for(int i = 0; i<size; i++){
            if(!temp->child[word[i]-'a']) temp->child[word[i]-'a'] = newnode();
            temp = temp->child[word[i]-'a'];
        }
        temp->end = true;
    }
    
    bool search(string word) {
        int size = word.size();
        Trienode * temp = root;
        for(int i = 0; i<size; i++){
            if(!temp->child[word[i]-'a']) return false;
            temp = temp->child[word[i]-'a'];
        }
        return temp->end;
    }
    
    bool startsWith(string prefix) {
        int size = prefix.size();
        Trienode * temp = root;
        for(int i = 0; i<size; i++){
            if(!temp->child[prefix[i]-'a']) return false;
            temp = temp->child[prefix[i]-'a'];
        }
        return true;
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
    
    }
    return 0;
}