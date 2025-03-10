class Solution {
public:
    // If any digit in base-3 is 2, return false
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 == 2) return false; 
            n /= 3;
        }
        return true;
    }
};