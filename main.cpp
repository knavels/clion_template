// #define DBG_MACRO_DISABLE
#define DBG_MACRO_NO_WARNING
#include "dbg.h"
#include <iostream>

using namespace std;

int main()
{
    dbg("Hello World! from {{project_name}}");
    cin.get();
    return 0;
}