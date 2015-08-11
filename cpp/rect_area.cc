#include <iostream>
using namespace std;

/**
 * Find the total area covered by two rectilinear rectangles in a 2D plane.
 *
 * Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.
 * Rectangle Area
 *
 * Assume that the total area is never beyond the maximum possible value of int.
 *
 * Credits:
 * Special thanks to @mithmatt for adding this problem, creating the above image and all test cases.
 */
//参照http://blog.csdn.net/foreverling/article/details/46411069
class Solution {
	public:
		int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
			int area = (D - B) * (C - A) + (H - F) * (G - E);
			if (A >= G || B >= H || C <= E || D <= F)
			{
				return area;

			}

			int top = min(D, H);
			int right = min(C, G);
			int bottom = max(B, F);
			int left = max(A, E);

			return area - (top - bottom) * (right - left);
		}

};
int main()
{
	Solution s;
}
