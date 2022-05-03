#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol929;

/*
Input: ["cba","daf","ghi"]
Output: 1
Explanation:
After choosing D = {1}, each column ["c","d","g"] and ["a","f","i"] are in non-decreasing sorted order.
If we chose D = {}, then a column ["b","a","h"] would not be in non-decreasing sorted order.
*/
tuple<vector<string>, int>
testFixture1()
{
  auto A = vector<string>{"cba", "daf", "ghi"};
  return make_tuple(A, 1);
}

/*
Input: ["a","b"]
Output: 0
Explanation: D = {}
*/
tuple<vector<string>, int>
testFixture2()
{
  auto A = vector<string>{"a", "b"};
  return make_tuple(A, 0);
}
/*
Input: ["zyx","wvu","tsr"]
Output: 3
Explanation: D = {0, 1, 2}
*/
tuple<vector<string>, int>
testFixture3()
{
  auto A = vector<string>{"zyx", "wvu", "tsr"};
  return make_tuple(A, 3);
}
void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.minDeletions(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.minDeletions(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.minDeletions(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}