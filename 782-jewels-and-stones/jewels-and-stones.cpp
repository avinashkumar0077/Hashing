class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        unordered_set<char>st;
        for(int i =0;i<n;i++){
            st.insert(jewels[i]);
        }
        int count =0;
        for(int i =0;i<stones.size();i++){
         if(st.find(stones[i])!=st.end()){
            count ++;
         }
        }
        return count;
    }
};