class Solution {
public:
    int letters[30];
    
     // O(max(s.size(), t.size())) времени и памяти 
    char findTheDifference(string s, string t) {
        for (int i = 0; i < s.size(); i++)
            letters[s[i] - 'a']++;
        for (int i = 0; i < t.size(); i++)
            letters[t[i] - 'a']++;
        for (int i = 0; i < 30; i++)
            if (letters[i] % 2 == 1)
                return char(i + 'a');
        return 'a';
    }
};
