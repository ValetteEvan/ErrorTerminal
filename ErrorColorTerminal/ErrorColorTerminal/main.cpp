
/*include this file*/
#include "error.hpp"
/*-----------------*/

int main()
{
    /*TEST WARNING*/
    WARNING("Basic Warning", 0,true);
    WARNING("Medium Warning", 1,true);
    WARNING("Medium Warning", 2,false);
    WARNING("Hard Warning", 3,true);
    /*-----------*/

    /*TEST ERROR*/
    ERROR_WARNING("Normal Error",true); 
    /*----------*/

    GOOD("Test good",true);
    GOOD("Test good", false);
    return 0;
}