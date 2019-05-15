//
// Created by Jonas Roquette on 2019-05-15.
//

#include <iostream>
#include <list>
#include <set>
#include <stdlib.h>
#include <time.h>

int main()
{
    int counter = 0;
    int counter2 = 0;
    int num;
    std::list<unsigned int> number_list;
    std::set<unsigned int> number_set;
    std::set<unsigned int> output_set;

    //Generates different "random" numbers each time
    srand(time(nullptr));

    //Fills a list with 100 random numbers between 1 and 100
    for (int i = 1; i <= 100; i++)
    {
        num = std::rand() % 100 + 1;
        number_list.push_back(num);
    }

    //Inserts every number once into the set
    for (auto i : number_list)
    {
        number_set.insert(i);
    }

    //Counts the amount of numbers in the set
    for (auto & i : number_set)
    {
        counter++;
    }

    for (int i = 1; i <= 100; i++)
    {
        if (number_set.count(i) == 0)
        {
            output_set.insert(i);
            counter2++;
        }
    }

    std::cout << "There are " << counter << " different numbers included in the list." << std::endl;
    std::cout << "Not included in the list are: " << std::endl;

    for (auto i : output_set)
    {
        std::cout << i << std::endl;
    }

    std::cout << "That's " << counter2 << " numbers which are not included."<< std::endl;
}
