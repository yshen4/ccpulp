#include <iostream>
#include <vector>

using namespace std;

namespace ccpulp {
    /*
     Given a rod of length n inches and an array of prices that contains prices 
     of all pieces of size smaller than n. Determine the maximum value obtainable 
     by cutting up the rod and selling the pieces.

     Analysis: P(n) = max(prices[i] + P(n-i)) for i = 1, ..., n-1
     when i == 0, P(0) = 0
     when i == 1, P(1) = prices[1]
     */
    //version 1: recursive
    double cutRod(int n, vector<double> &prices) {
         if (n == 0) return 0;
         if (n == 1) return prices[n];

         double maxp = 0;
         for (int i = 1; i <= n; ++i) {
             maxp = max(maxp, prices[i] + cutRod(n - i, prices));
         }
         return maxp;
    }

    double cutRod_dp(int n, vector<double> &prices) {
         if (n == 0) return 0;
         if (n == 1) return prices[n];

         // Init the original value to prices: one piece
         vector<double> maxp(prices);
         for (int i = 1; i <= n; ++i) {
             //For each i, check if we can maximize it by split it up
             for (int j = 1; j <= i; ++j) {
                 maxp[i] = max(maxp[i], prices[j] + maxp[i - j]);
             }
         }
         return maxp[n];
    }
}

int main(void) {
    vector<double> prices {0, 1, 5, 8, 9, 10, 17, 17, 20};
    cout << "Max proft for n=" << 3 << ": " << ccpulp::cutRod_dp(3, prices) << endl;
    cout << "Max proft for n=" << prices.size()-1 << ": " << ccpulp::cutRod_dp(prices.size()-1, prices) << endl;
}
