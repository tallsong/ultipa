
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
 
using namespace std;
 

vector<vector<int>> permutation(vector<int>& nums)
{
    vector<vector<int>> res;
    
    sort(nums.begin(),nums.end());
    do
    {
        vector<int> tmp;
        for(auto i:nums)
        {

            tmp.push_back(i);
        }
        res.push_back(tmp);
    }
    while(next_permutation(nums.begin(),nums.end()));
    return res;
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = permutation(nums);
    for(auto i:res)
    {
        for(auto j:i)  
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}


