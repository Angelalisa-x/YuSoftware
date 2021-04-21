class Solution {
public:
    int reverse(int x) {
        
        int MAX = INT_MAX, MIN = INT_MIN;
        long int rev = 0;
        while(x!=0){
            if(rev*10 > MAX) return 0;
            rev = rev*10 + x%10;
            x /= 10;
        }
        return (rev<MIN or rev>MAX) ? 0:rev;
    } 
};


// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
// Example 4:

// Input: x = 0
// Output: 0