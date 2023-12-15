#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <getopt.h>
#include "io.hpp"
using std :: string;
using std :: cout;
using std :: endl;



int main(int argc, char *argv[])
{
    string file_name;
    bool is_file = GetArgs(argc, argv, file_name);
    if (is_file)
        freopen(file_name.c_str(), "r", stdin);
    Input();
    while (1)
    {
        break;
        // Posedge();
    }
    return 0;
}