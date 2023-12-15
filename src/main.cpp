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
    cout << is_file << endl;
    return 0;
}