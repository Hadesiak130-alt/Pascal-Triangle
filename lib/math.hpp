#ifndef MATH_HPP
#define MATH_HPP
#pragma once
#include <cmath>
#include <vector>

class math {
    private:
        int pascalSpecific(int n, int k) {
            return static_cast<int>(std::tgamma(k+1)*std::tgamma(n-k+1));
        }
    public:
        std::vector<int> pascal(int n) {
            if (n<0) {
                return {};
            }
            std::vector<int> a = {};
            for (int k = 1; k<=n+1; k++) {
                a.push_back(pascalSpecific(n, k));
            }
            return a;
        }
};

#endif