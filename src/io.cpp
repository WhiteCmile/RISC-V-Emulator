#include <getopt.h>
#include <string>
#include "io.hpp"
using std :: string;
    
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