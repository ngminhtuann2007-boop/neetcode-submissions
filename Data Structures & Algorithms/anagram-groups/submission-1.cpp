class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mt;
        for(string s : strs){
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            mt[tmp].push_back(s);
        }
        vector<vector<string>> em;
        for(pair <string, vector<string>> i : mt){
            em.push_back(i.second);
        }
        return em;
    }
};
