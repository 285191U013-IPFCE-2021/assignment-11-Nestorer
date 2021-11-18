#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    REQUIRE(sumtail(1, 0) == 1);
    REQUIRE(sumtail(2, 0) == 3);
    REQUIRE(sumtail(10, 0) == 55);
    REQUIRE(sumtail(100, 0) == 5050);
    REQUIRE(sumtail(1000, 0) == 500500);
    REQUIRE(sumtail(10000, 0) == 50005000);
    REQUIRE(sumtail(65535, 0) == 2147450880);
}

TEST_CASE("sumwhile")
{
    REQUIRE(sumwhile(1) == 1);
    REQUIRE(sumwhile(2) == 3);
    REQUIRE(sumwhile(10) == 55);
    REQUIRE(sumwhile(100) == 5050);
    REQUIRE(sumwhile(1000) == 500500);
    REQUIRE(sumwhile(10000) == 50005000);
    REQUIRE(sumwhile(65535) == 2147450880);
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1) == 1);     // sum(1) must be 1
    REQUIRE(sumn(3) == 9);     // sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33) == 1089); // sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
    REQUIRE(fib(1, 1, 0) == 1);
    REQUIRE(fib(2, 1, 0) == 1);
    REQUIRE(fib(3, 1, 0) == 2);
    REQUIRE(fib(4, 1, 0) == 3);
    REQUIRE(fib(5, 1, 0) == 5);
    REQUIRE(fib(6, 1, 0) == 8);
    REQUIRE(fib(10, 1, 0) == 55);
    REQUIRE(fib(15, 1, 0) == 610);
    REQUIRE(fib(20, 1, 0) == 6765);
}
