
class Solution {
public:
    int strStr(string a, string b) {
        int n = a.size();
        int m = b.size();

        if (m == 0) {
            return 0;
        }

        bool found = true;

        for (int i = 0; i <= n-m; i++) {
            found = true;

            if (a[i] == b[0]) {
                for (int j = 1; j < m; j++) {
                    if (a[i+j] != b[j]) {
                        found = false;
                        break;
                    }
                }
            }
            else {
                found = false;
            }

            if (found == true) {
                return i;
            }
        }

        return -1;
    }
};
