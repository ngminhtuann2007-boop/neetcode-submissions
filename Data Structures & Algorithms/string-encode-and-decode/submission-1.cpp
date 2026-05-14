#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
        string encode(vector<string>& strs) {
            string moi = "";
            for(string i : strs)
                moi += to_string(i.length()) +"#" + i;
            return moi;
        }
        vector<string> decode(string s) {
            vector<string> tmp;
            int i = 0;
            while(i < s.length()){
                int j = i;
                while(s[j] != '#') j++ ;
                int len = stoi(s.substr(i, j-i));
                tmp.push_back(s.substr(j+1, len));
                i = j + 1 + len;
            }
            return tmp;
        }
};
