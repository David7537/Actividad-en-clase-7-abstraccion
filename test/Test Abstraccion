#include <gtest/gtest.h>
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

TEST(AbstraccionTest, SumaPositiva) {
    Suma suma;
    EXPECT_EQ(suma.calcular(3, 4), 7);
}

TEST(AbstraccionTest, RestaNegativa) {
    Resta resta;
    EXPECT_EQ(resta.calcular(2, 5), -3);
}

TEST(AbstraccionTest, Multiplicacion) {
    Multiplicacion mult;
    EXPECT_EQ(mult.calcular(3, 5), 15);
}

TEST(AbstraccionTest, DivisionEntera) {
    Division div;
    EXPECT_EQ(div.calcular(10, 2), 5);
}
