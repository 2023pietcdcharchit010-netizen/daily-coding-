class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;
// Extract Each digit and store their Freq
        while(n>0){
            int rem=n%10;
            mp[rem]++;
            n=n/10;
        }
// Calculate digit * its freq
        int ans=0;
        for(auto it :mp){
            ans=ans+it.first*it.second;
        }
        return ans;
    }
};