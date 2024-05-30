#include "pch.h"

#include "../TDD_PrimeFactors/prime_factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(prime_factor.of(1), expected);
}

TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(prime_factor.of(2), expected);
}
