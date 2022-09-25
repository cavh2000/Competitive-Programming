//https://leetcode.com/problems/implement-trie-prefix-tree/
struct Node{
    Node *child[26];
    bool flag=false;
};
class Trie {
    Node* root;
public:
    
    
    Trie() {
        root=new Node();        
    }
    
    void insert(string word) {
         Node* dummy = root;
        
        
        for(int i=0;i<word.size();i++){
            if(!dummy->child[word[i]-'a'])
                dummy->child[word[i]-'a']=new Node();
            dummy=dummy->child[word[i]-'a'];
        }
        dummy->flag=true;;
        
    }
    
    bool search(string word) {
        Node* dummy = root;
        
        for(int i=0;i<word.size();i++){
            if(!dummy->child[word[i]-'a'])
                return false;
            dummy=dummy->child[word[i]-'a'];
        }
        return dummy->flag;
    }
    
    bool startsWith(string prefix) {
        Node* dummy = root;
        
        for(int i=0;i<prefix.length();i++){
            if(!dummy->child[prefix[i]-'a'])
                return false;
            dummy=dummy->child[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
