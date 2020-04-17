#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int n, a;
vector<int> nums;
vector<pair<int,int>> results;

void binarySearch(int left, int right)
{
    int l = left - 1;
    int mid = left;
    int goal = nums[left] * 2;
    while (left <= right)
    {
        if (nums[mid] == goal) break;
        mid = (right + left) / 2;
        if (nums[mid] < goal) left = mid + 1;
        else if (nums[mid] > goal) right = mid - 1;
    }
    while (mid + 1 < nums.size() && nums[mid] == nums[mid + 1]) mid++;
    if (goal >= nums[left]) results.push_back(make_pair(goal - nums[left], nums.size() + l - mid - 1));
}

int main()
{
    /* freopen("input.txt","r",stdin);
    freopen("output.txt", "w", stdout); */
    cin >> n;
    while (n--)
    {
        cin >> a;
        nums.push_back(a);
    }
    nums.push_back(0);
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size() / 2 + 1; i++)
    {
        binarySearch(i, nums.size() - 1);
    }
    sort(results.begin(), results.end());
    for (auto p : results) cout << p.first << " " << p.second << endl;
    return 0;
}