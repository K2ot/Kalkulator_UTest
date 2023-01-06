#include "pch.h"
#include "../Kalkulator/Kalkulator.h"


// Test sprawdzaj¹cy poprawne dzia³anie przy dzieleniu przez ZERO
TEST(DzielenieTest, TestDzielenieZERO)
{
	EXPECT_DOUBLE_EQ(NULL, dzielenie(5, 0));
	EXPECT_DOUBLE_EQ(NULL, dzielenie(5.5, 0));
	EXPECT_DOUBLE_EQ(NULL, dzielenie(-5, 0));
	EXPECT_DOUBLE_EQ(NULL, dzielenie(-5.5, 0));
}

// Test sprawdzaj¹cy poprawne dzia³anie funkcji dla ró¿nych dzielników i dzielnych
TEST(DzielenieTest, TestLiczbDodatnich) {
	
	EXPECT_DOUBLE_EQ(5, dzielenie(10, 2));
	EXPECT_DOUBLE_EQ(4, dzielenie(100, 25));
	EXPECT_DOUBLE_EQ(0.333333, dzielenie(1, 3));
	EXPECT_DOUBLE_EQ(3, dzielenie(3, 1));
}

// Test sprawdzaj¹cy obs³ugê liczb ujemnych
TEST(DzielenieTest, TestLiczbUjemnych) {
	
	EXPECT_DOUBLE_EQ(5, dzielenie(-10, -2));
	EXPECT_DOUBLE_EQ(-4, dzielenie(-100, 25));
	EXPECT_DOUBLE_EQ(0.333333, dzielenie(-1, -3));
}


TEST(MnozenieTest, TestLiczbCalowitych) {
	EXPECT_EQ(mnozenie(2, 3), 6);
	EXPECT_EQ(mnozenie(4, 5), 20);
	EXPECT_EQ(mnozenie(-2, 3), -6);
	EXPECT_EQ(mnozenie(-4, -5), 20);
}

TEST(MnozenieTest, TestLiczbDziesietnych) {
	EXPECT_EQ(mnozenie(2, 0.5), 1);
	EXPECT_EQ(mnozenie(4, -0.5), -2);
	EXPECT_EQ(mnozenie(-2, 3), -6);
	EXPECT_EQ(mnozenie(-4, -5), 20);
}

TEST(MnozenieTest, TestZera) {
	EXPECT_EQ(mnozenie(0, 0), 0);
	EXPECT_EQ(mnozenie(4, 0), 0);
	EXPECT_EQ(mnozenie(-4, 0), 0);
}