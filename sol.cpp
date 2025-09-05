class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
         // using the logical and the optimal solution.

         int t = 0;

         while(true){

          long long val = (long long)num1-(long long)t*num2;
          
            if(val<0) return -1;

           
          long long bitCount = __builtin_popcountll(val);

          if(bitCount<=t && t<=val) return t;

          t++;

            
         }

 return -1;

    }
};