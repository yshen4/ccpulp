#include <iostream>

using namespace std;

namespace ccpulp {
    /*
     Fibonacci sequence calculation time is T(n) = T(n-1) + T(n-2)
     In normal iterative calculation, T(n) >= 2T(n-2) = ... = O(2^(n/2))

     With memoization, T(i),i<n is O(1), therefore T(n) = O(1) + O(1) + ... = O(n) 
     */
    long fib(long n) {
        // 1: Memoize answers
        long f0 = 0, f1 = 1;
        if (n < 1) return 0;
        if (n < 2) return 1;

        // T(n) = T(n-1) + T(n-2)
        for (int i = 2; i <= n; ++i) {
            // 2: normalize a problem to sub-problems: F(n) = F(n-1) + F(n-2)
            long f = f0 + f1;

            // 3: memoize answers to sub-problems, so no need to recursive calls
            f0 = f1;
            f1 = f;
        }
        return f1;
    }
}

int main(void) {
   long fibv[] {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
   for (int i = 0; i < sizeof(fibv)/sizeof(long); ++i) {
       long fibc = ccpulp::fib(i);
       cout << "fibonaci(" <<i<<")="<<fibc << ": " << fibv[i] <<endl;
   }
}
