
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        string word = "";

        for (char c : paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } else if (!word.empty()) {
                if (ban.find(word) == ban.end()) {
                    freq[word]++;
                }
                word = "";
            }
        }

        // Process the last word if the paragraph ends with a letter
        if (!word.empty() && ban.find(word) == ban.end()) {
            freq[word]++;
        }

        string ans = "";
        int maxFreq = 0;

        for (auto& p : freq) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};
