//
// Created by Jonas Roquette on 2019-05-16.
//

#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>


bool remover (int i)
{
    return i % 3;
}

bool is_multiple_of_3 (int i)
{
    if (i % 3 == 0)
    {
        return true;
    }
}

TEST_CASE("filter alle vielfache von drei", "[erase]")
{
    std::vector<unsigned int> v;

    for (int i = 1; i <= 100; i++)
    {
        int num = std::rand() % 100 + 1;
        v.push_back(num);
    }

    v.erase(std::remove_if(v.begin(), v.end(), remover), v.end());

REQUIRE(std::all_of(v.begin(), v.end(), is_multiple_of_3));
}

int main(int argc, char* argv [])
{
    return Catch::Session().run(argc, argv);
}