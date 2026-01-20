int scoreOfString(string s) {
    int score = 0;
    for(int i = 1; i < s.size(); i++) {
        score += abs(s[i] - s[i - 1]);
    }
    return score;
}
Complexity Analysis

Time Complexity: O(n)
(Single pass through the string)

Space Complexity: O(1)
(Only a variable to store score)