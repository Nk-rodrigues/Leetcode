class Trie {
private:
    unordered_map<char, Trie*> map;
    bool isWord = false;
public:
    Trie() {
    }
    
    void insert(string word) {
        Trie* temp = this;
        for(char ch : word){
            if(temp->map.count(ch)==0) {
                temp->map[ch] =new Trie();
            }
            temp = temp->map[ch];
        }
        temp->isWord = true;
    }
    
    bool search(string word) {
        Trie* temp = this;
        for(char ch : word){
            if(temp->map.count(ch) == 0) return false;
        temp = temp->map[ch];
        }
        return temp->isWord;
    }
    
    bool startsWith(string prefix) {
        Trie* temp = this;
        for(char ch : prefix){
            if(temp->map.count(ch) == 0) return false;
        temp = temp->map[ch];
        }
        return true;
    }
};