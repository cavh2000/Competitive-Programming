// https://leetcode.com/problems/search-suggestions-system/
struct Node{
    Node* child[26];
    bool flag=false;
};

class Trie{
    private: Node* root;
    
    public: Trie(){
        root = new Node();
    }
    
    public: void insert(string word){
        Node* node = root;
        
        for(int i=0;i<word.size();i++){
            if(!node->child[word[i]-'a'])
                node->child[word[i]-'a'] = new Node();
            node = node->child[word[i]-'a'];
        }
        
        node->flag=true;
    }
    //Did not use this func
    public: bool search(string word){
        Node* node = root;
        
        for(int i=0;i<word.size();i++){
            if(!node->child[word[i]-'a'])
                return false;
            node = node->child[word[i]-'a'];
        }
        
        return node->flag;
    }
    
    public: vector<string> autocomplete(string word){
        Node* node = root;
        vector<string> ans;
        for(int i=0;i<word.size();i++){
            if(!node->child[word[i]-'a'])
                return ans;
            node = node->child[word[i]-'a'];
        }
        
        dfs(node, word, ans);
        
        return ans;
    }
    
    public: void dfs(Node* node, string word, vector<string> &ans){
        if(ans.size()==3)
            return;
        
        if(node->flag)
            ans.push_back(word);
            
        for(int i=0;i<26;i++){
            if(node->child[i])
                dfs(node->child[i], word + (char)('a' + i), ans);
        }
    }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie trie;
        
        for(int i=0;i<products.size();i++){
            trie.insert(products[i]);
        }
        
        vector<vector<string>> answer;
        string prefix="";
        
        for(int i=0;i<searchWord.size();i++){
            prefix += searchWord[i];
            answer.push_back(trie.autocomplete(prefix));
        }
        
        return answer;
    }
};
