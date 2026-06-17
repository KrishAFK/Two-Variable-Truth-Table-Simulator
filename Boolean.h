#ifndef Boolean_H
#define Boolean_H

using namespace std;

#include <iostream>
#include <string>


class Boolean 
{
public:
    string exp;

    Boolean(string exp);

    void eval();
};

#endif