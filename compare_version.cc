#include <iostream>
#include <string.h>
using namespace std;
/**
 * Compare two version numbers version1 and version2.
 * If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.
 *
 * You may assume that the version strings are non-empty and contain only digits and the . character.
 * The . character does not represent a decimal point and is used to separate number sequences.
 * For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.
 *
 * Here is an example of version numbers ordering:
 *
 * 0.1 < 1.1 < 1.2 < 13.37
 */
class Solution {

	public:
		inline void getnum(const char *&sbegin, char ch, int &num) {
			while (sbegin && *sbegin && *sbegin != ch) {
				num *= 10;
				num += *sbegin - '0';
				sbegin++;
			}
		}
		int compareVersion(string version1, string version2) {
			const char *p = version1.c_str();
			const char *p2 = version2.c_str();
			int v1 = 0, v2 = 0;
			bool flag1 = false, flag2 = false;
			while (1){
				v1 = 0;
				v2 = 0;
				if (*p == '\0' && *p2 == '\0') break;
				if (*p != '\0') {
					getnum(p, '.', v1);
					if (*p != '\0')
					p++;
					if (flag2)
						break;
				} else {
					flag1 = true;
				}
				if (*p2 != '\0'){
					getnum(p2, '.', v2);
					if (*p2 != '\0')
					p2++;
					if (flag1)
						break;
				}
				else {
					flag2 = true;
				}
				if (v1 > v2) return 1;
				else if (v1 < v2) return -1;
			}
			if (v1 > v2) return 1;
			else if (v1 == v2) return 0;
			return -1;
		}
};

int main()
{
	Solution s;
	cout << s.compareVersion("01", "1") << endl;
	cout << s.compareVersion("10", "1") << endl;
	cout << s.compareVersion("0", "1") << endl;
	cout << s.compareVersion("0.1", "1") << endl;
	cout << s.compareVersion("1", "1.1") << endl;
	cout << s.compareVersion("1", "1.1") << endl;
	cout << s.compareVersion("1", "1.1") << endl;
	cout << s.compareVersion("1", "1.1") << endl;
	cout << s.compareVersion("1.1", "1.01.0") << endl;
	cout << s.compareVersion("10.6.5", "10.6") << endl;
	return 0;
}
