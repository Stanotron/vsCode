#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

//same tree

 struct Dictnode{
    Dictnode * next[26];
    bool end = false;
};
Dictnode *newnode(){
    Dictnode *temp = new Dictnode();
    for(int i = 0; i<26; i++){
        temp->next[i] == NULL;
    }
    temp->end = false;
    return temp;
}
Dictnode * root = NULL;
class WordDictionary {
public:
    WordDictionary() {
        root = newnode();
    }
    
    void addWord(string word) {
        int s = word.size();
        Dictnode * temp = root;
        for(int i = 0; i<s; i++){
            if(!temp->next[word[i]-'a']) temp->next[word[i]-'a'] = newnode(); 
            temp = temp->next[word[i]-'a']; 
        }
        temp->end = true;
    }
    
    bool dfs(string word, int start,Dictnode *curr){
        Dictnode *temp = curr;
        int s = word.size();
        for(int i = start; i<s; i++){
            if(word[i]=='.'){
                for(int j = 0; j<26; j++){
                    if(temp->next[j]){
                        if(dfs(word,i+1,temp->next[j])) return true;
                    }
                }
                return false;
            }
            else{
                if(!temp->next[word[i]-'a']) return false;
                temp = temp->next[word[i]-'a']; 
            } 
        }
        return temp->end;
    }

    bool search(string word) {
        return dfs(word,0,root);
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