class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapS[256] = {0};
        int mapT[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            if (mapS[ch1] != mapT[ch2]) {
                return false;
            }
            mapS[ch1] = i + 1;
            mapT[ch2] = i + 1;
        }
        return true;
    }
};