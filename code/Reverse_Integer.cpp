class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        int tmp;
        while(x) {
            tmp=x%10;
            res = res*10 + tmp;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};
