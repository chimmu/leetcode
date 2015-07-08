#include <iostream>
#include <string.h>
/**
 *  Implement a trie with insert, search, and startsWith methods.
 *
 *  Note:
 *  You may assume that all inputs are consist of lowercase letters a-z. 
 */
using namespace std;
class TrieNode {
public:
	bool iskey;
	TrieNode *next[26];
    // Initialize your data structure here.
    TrieNode() {
		iskey = false;
	    for (int i = 0; i < 26; i++)
		next[i] = NULL;
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
	    const char *p = word.c_str();
	    TrieNode *tmp = root;
	    int idx = 0;
	    while (*p) {
		    idx = *p - 'a';
		    if (!tmp->next[idx]) {
			     tmp->next[idx] = new TrieNode();
		    }
		    tmp = tmp->next[idx];
		    p++;
	    }
		tmp->iskey = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
	       TrieNode *tmp = root;
	    const char *p = word.c_str();
	    while (*p) {
		    if (!tmp) return false;
		    if (!tmp->next[*p - 'a'])
			    return false;
		    tmp = tmp->next[*p - 'a'];
		    p++;
	    }
	    return tmp->iskey;
	}

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
       TrieNode *tmp = root;
	    const char *p = prefix.c_str();
	    while (*p) {
		    if (!tmp) return false;
		    if (!tmp->next[*p - 'a'])
			    return false;
		    tmp = tmp->next[*p - 'a'];
		    p++;
	    }
	    return true;
    }

private:
    TrieNode* root;
};


int main()
{
	Trie tree;
	tree.insert("ab");

	cout << tree.search("a") << endl;
	cout << tree.startsWith("a") << endl;
	return 0;
}
