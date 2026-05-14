class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> tmp;
        for(int i : nums)
            tmp[i]++;
        vector<pair<int, int>> em;
        for(auto i : tmp){
            em.push_back({i.second, i.first});
        }
        sort(em.begin(), em.end(), greater<pair<int,int>>());
        vector <int> moi;
        for(int i=0; i<k; i++){
            moi.push_back(em[i].second);
        }
        return moi;
    }
};
