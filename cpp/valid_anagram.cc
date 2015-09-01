#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
/**
 * Given two strings s and t, write a function to determine if t is an anagram of s.
 *
 * For example,
 * s = "anagram", t = "nagaram", return true.
 * s = "rat", t = "car", return false.
 *
 * Note:
 * You may assume the string contains only lowercase alphabets.
 */

class Solution {
	public:
		bool isAnagram(string s, string t) {
			int sarr[26] = {0};
			int tarr[26] = {0};
			int slen = s.length(), tlen= t.length();
			if (slen != tlen) return false;
			int i = 0;
			while (i < slen) {
				sarr[s[i] - 'a']++;
				tarr[t[i] - 'a']++;
				i++;
			}
			if (memcmp(sarr, tarr, sizeof(sarr)))
				return false;
			return true;
		}

};

int main()
{
	Solution s;
	cout << s.isAnagram("anagram", "nagaram") << endl;
	cout << s.isAnagram("car", "rat") << endl;
	cout << s.isAnagram("axncxlhjle", "xxconlaelh") << endl;
}
