#include <iostream>
#include <getopt.h>
#include <string>
#include <map>
#include "io.hpp"
using std :: string;
using std :: cin;
using std :: map;
    

map<unsigned int, int> instruction; // instruction memory

bool GetArgs(int argc, char *argv[], string &file_name)
{
    int option;
    bool flag = 0;
    while ((option = getopt(argc, argv, "f:")) != -1)
    {
        switch (option)
        {
            case 'f':
            {
                file_name = string(optarg);
                flag = 1;
                break;
            }
        }
    }
    return flag;
}

int HexToInt(char c)
{
    if (isdigit(c)) return c - '0';
    return c - 'A' + 10;
}

void Input()
{
    char c;
    unsigned int addr = 0;
    while (cin >> c)
    {
        if (c == '@')
        {
            string new_addr;
            cin >> new_addr;
            addr = std :: stoul(new_addr, nullptr, 16);
            continue;
        }
        if (c == ' ') continue;
        char new_c;
        cin >> new_c;
        std :: cout << c << new_c << std :: endl;
        instruction[addr] = HexToInt(c) << 4 | HexToInt(new_c);
        addr++;
    }
}