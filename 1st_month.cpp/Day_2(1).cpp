350. Intersection of Two Arrays II

vector<int>intersect(vector<int>&nums1, vector<int>&nums2)
{
    int i = 0, j = 0;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int>ans; // simple iteration but using sort it may be solved but irrevelent
    while(i < n1 && j < n2)
    {
        if(nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }

        else if(nums1[i] < nums2[j])
        {
            i++;
        }

        else{
            j++;
        }
    }
    return ans;
}


//USING HASTABLE

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto i:nums1)
        {
            mp[i]++;
        }

        for(auto i:nums2)
        {
            if(mp[i] > 0)
            {
                ans.push_back(i);// This method check if element in 1st array is there are not
                // if it is present we push to ans array and decriment one count [this is the important step]
                mp[i]--;
            }
        }
        return ans;
    }
};//   prefer this answerrrrrrr....