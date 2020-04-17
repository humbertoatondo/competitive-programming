#include <iostream>
#include <vector>
using namespace std;

int n, a;
vector<int> nums;

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> a;
        nums.push_back(a);
    }
    int ans = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == 3 || ) continue;
        ans++;
    }
    return 0;
}