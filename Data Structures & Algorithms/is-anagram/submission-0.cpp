class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length() != t.length()) return false;
            int a[256]={0};
            for (int i=0; i<s.length(); i++){
                a[(int)s[i]]++;
            }                
            for(int i=0; i<t.length(); i++){
                a[(int)t[i]]--;
            }
            for(int i =0 ;i< 256; i++){
                if(a[i]!=0) return false;
            }
            return true;   
        }
};
