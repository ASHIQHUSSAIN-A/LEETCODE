class Solution {
public:
    int maxScoreSightseeingPair(std::vector<int>& values) {
        int max_i = values[0] + 0; // Max of values[i] + i
        int max_score = 0;

        for (int j = 1; j < values.size(); j++) {
            max_score = std::max(max_score, max_i + values[j] - j);
            max_i = std::max(max_i, values[j] + j);
        }

        return max_score;
    }
};
