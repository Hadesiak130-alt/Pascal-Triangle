#ifndef MATH_HPP
#define MATH_HPP
#pragma once
#include <cmath>
#include <vector>

class math {
    private:
        long long int pascalSpecific(int n, int k) {
            return static_cast<int>(std::tgamma(n+1)/(std::tgamma(k+1)*std::tgamma(n-k+1)));
        }
    public:
        std::vector<long long int> pascal(int n) {
            if (n<0) {
                return {};
            }
            std::vector<long long int> a = {};
            for (int k = 0; k<=n; k++) {
                a.push_back(pascalSpecific(n, k));
            }
            return a;
        }
};

#endif