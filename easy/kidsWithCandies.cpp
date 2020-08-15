#include<iostream>
#include<vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans(int(candies.size()), false);
    int mx = -1;
    for(int i=0; i < candies.size(); i++)
    {
        if(candies[i] > mx )
        {
            mx = candies[i];
        }
    }
    
    for(int i=0; i < candies.size(); i++)
    {
        if(candies[i] + extraCandies >= mx)
        {
            ans[i] = true;
        }
        else ans[i] = false;
    }
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(1);
    v.push_back(12);
    int extra = 10;
    vector<bool> ans = kidsWithCandies(v, extra);
    for(int i=0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}