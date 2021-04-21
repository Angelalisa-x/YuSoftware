#include <iostream>
#include <string>

using namespace std;

string convert(string s, int numRows) {
    
    if(numRows <= 1) {
        return s;
    }

    string ret = "";
    int periodSize = 2 * numRows - 2;
    int inc1, inc2 = 0;

    for(int i = 0; i < numRows; i ++) {
        inc1 = periodSize - (i * 2);
        inc2 = periodSize - inc1;
        int j = i;

        while(j < s.length()) {
            if(inc1 != 0 && j < s.length()) {
                ret += s[j];
                j += inc1;
            }
            
            if(inc2 != 0 && j < s.length()) {
                ret += s[j];
                j += inc2;
            }
        }
    }

    return ret;
}


int main()
{
    string s = "PAYPALISHIRING";
    cout << convert(s, 3) << endl;

    return 0;
}

// P   A   H   N
// A P L S I I G
// Y   I   R

// Your input
// "PAYPALISHIRING"
// 3
// Output
// "PAHNAPLSIIGYIR"
// Expected
// "PAHNAPLSIIGYIR"