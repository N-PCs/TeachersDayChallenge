class Solution {
public:
    int romanToInt(string s) {
        static const unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int total = 0;
        const int n = s.length();
        for (int i = 0; i < n; i++) {
            int currentValue = romanValues.at(s[i]);
            if (i + 1 < n && currentValue < romanValues.at(s[i + 1])) {
                total -= currentValue;
            } else {
                total += currentValue;
            }
        }
        return total;
    }
};