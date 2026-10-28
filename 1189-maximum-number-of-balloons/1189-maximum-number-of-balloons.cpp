class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freq[26]={0};
        for(int i=0;i<text.length();i++){
            freq[text[i]-'a']++;
        }
        int mini=INT_MAX;
        mini=min({freq[1],freq[0],freq[11]/2,freq[14]/2,freq[13]});
        return mini;

    }
};