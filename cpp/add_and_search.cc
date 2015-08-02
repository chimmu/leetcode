#include <iostream>
#include <vector>
using namespace std;

/**
 *  Design a data structure that supports the following two operations:
 *
 *  void addWord(word)
 *  bool search(word)
 *
 *  search(word) can search a literal word or a regular expression string containing only letters a-z or .. A . means it can represent any one letter.
 *
 *  For example:
 *
 *  addWord("bad")
 *  addWord("dad")
 *  addWord("mad")
 *  search("pad") -> false
 *  search("bad") -> true
 *  search(".ad") -> true
 *  search("b..") -> true
 *
 *  Note:
 *  You may assume that all words are consist of lowercase letters a-z. 
 */

class WordDictionary {
	public:
		struct node {
			bool word;
			node *next[26];
			node():word(false) {
				for (int i = 0; i < 26; i++)
					next[i] = NULL;
			}
		};
		node *root;
		WordDictionary():root(new node){}
		// Adds a word into the data structure.
		void addWord(string word) {
			int len = word.length();
			node *tmp = NULL;
			node *p = root;
			for (int i = 0; i < len; i++) {
				int ch = word[i] - 'a';
				if (p->next[ch]) {
					p = p->next[ch];
					continue;
				}
				tmp = new node;
				p->next[ch] = tmp;
				p = tmp;
			}
			p->word = true;
		}

			// Returns if the word is in the data structure. A word could
			// contain the dot character '.' to represent any one letter.
			bool search(string word) {
				return search(word.c_str(), root);
			}
			bool search(const char *str, node *p) {
				if (!p) return false;
				if (*str == '\0') return p->word;
				if (*str == '.') {
					for (int i = 0; i < 26; i++) {
						if (p->next[i])
							if (search(str+1, p->next[i])) 
								return true;

					}
				} else {
					return search(str + 1, p->next[*str - 'a']);
				}
			}
		};

		// Your WordDictionary object will be instantiated and called as such:
		// WordDictionary wordDictionary;
		// wordDictionary.addWord("word");
		// wordDictionary.search("pattern");
int main() {
	WordDictionary w;
       /* w.addWord("pat");*/
	//w.addWord("bat");
	//w.addWord("cat");
	//w.addWord("car");
	w.addWord("a");
	w.addWord("ab");

       /* cout << w.search(".a.") << endl;*/
	//cout << w.search("c.t") << endl;
	//cout << w.search("b..") << endl;
	/*cout << w.search("b.r") << endl;*/
	cout << w.search("a") << endl;
	cout << w.search("a.") << endl;
}
