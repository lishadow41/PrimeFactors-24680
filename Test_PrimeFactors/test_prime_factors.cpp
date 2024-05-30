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

TEST_F(PrimeFixture, Of3) {
	vector<int> expected = {3};
	EXPECT_EQ(prime_factor.of(3), expected);
}

TEST_F(PrimeFixture, Of4) {
	vector<int> expected = {2, 2};
	EXPECT_EQ(prime_factor.of(4), expected);
}

TEST_F(PrimeFixture, Of6) {
	vector<int> expected = {2, 3};
	EXPECT_EQ(prime_factor.of(6), expected);
}

TEST_F(PrimeFixture, Of9) {
	vector<int> expected = {3, 3};
	EXPECT_EQ(prime_factor.of(9), expected);
}
