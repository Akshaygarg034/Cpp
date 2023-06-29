class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;

        // Because if n = 2^-31 then on converting it to +ve, we will get int overflow. So using here long.
        long n1 = n;
        
        if(n1 < 0) n1 = n1 * -1;

        while(n1 > 0){
            if(n1 % 2 == 0){
                x = x * x;
                n1 = n1/2;
            }

            else{
                ans *= x;
                x = x * x;
                n1 = n1/2;
            }
        }

        if(n < 0) return 1/ans;
        return ans;
    }
};
