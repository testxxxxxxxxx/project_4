#ifndef CYCLE

#define CYCLE 1

#include <iostream>
#include <vector>

using namespace std;

namespace GraphCycle
{
    class Cycle
    {
        vector<int> content;

        public:

            Cycle()
            {

            }

        void add(int value); //add element to cycle
        void clear(); //clear all cycle
        bool search(int value); //search element in cycle      

    };

};

#endif