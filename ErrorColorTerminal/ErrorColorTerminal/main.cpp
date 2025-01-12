
/*include this file*/
#include "error.hpp"
/*-----------------*/

int main()
{
    /*TEST WARNING*/
    WARNING("Basic Warning", 0);
    WARNING("Medium Warning", 1);
    WARNING("Medium Warning", 2);
    WARNING("Hard Warning", 3);
    /*-----------*/

    /*TEST ERROR*/
    ERROR_WARNING("Normal Error"); 
    /*----------*/

    GOOD("Test good"); 
    return 0;
}