#include "pch.h"

#include "../TDD_PrimeFactors/prime_factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(prime_factor.of(1), expected);
}
