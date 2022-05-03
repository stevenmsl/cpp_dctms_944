#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol944;
using namespace std;

/*takeaways
  - scan by col than by row to detect if
    the non-decreasing sorted oreder is followed
*/
int Solution::minDeletions(vector<string> &A)
{
  int rows = A.size(), cols = A[0].size();
  auto result = 0;

  for (auto c = 0; c < cols; c++)
    for (auto r = 1; r < rows; r++)
      /* smaller than the previous row for the same column */
      if (A[r][c] < A[r - 1][c])
      {
        result++;
        break;
      }

  return result;
}