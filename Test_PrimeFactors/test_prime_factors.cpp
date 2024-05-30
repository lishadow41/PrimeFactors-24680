#include "pch.h"

#include "../TDD_PrimeFactors/prime_factors.cpp"

#include <vector>
using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
};

TEST_F(PrimeFixture, Of1) {
	vector<int> expected = {};
	EXPECT_EQ(prime_factor.of(1), expected);
}

TEST_F(PrimeFixture, Of2) {
	vector<int> expected = {2};
	EXPECT_EQ(prime_factor.of(2), expected);
}
