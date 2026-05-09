//medium
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int j=0;
        int maxLen =0;
        int n =s.size();
        for(int i = 0;i<n;i++){
            while(st.count(s[i])){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            maxLen=max(maxLen,i-j+1);
        }
        return maxLen;

    }
};