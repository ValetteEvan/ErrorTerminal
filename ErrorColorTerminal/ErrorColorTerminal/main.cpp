
/*include this file*/
#include "error.hpp"
/*-----------------*/

int main()
{
    /*TEST WARNING*/
    WARNING_CALL("Test warning level 0", 0, true); 
    WARNING_CALL("Critical warning level 3", 3, false); 
    /*-----------*/

    /*TEST ERROR*/
    ERROR_WARNING("Normal Error",true); 
    /*----------*/

    GOOD("Test good",true);
    GOOD("Test good", false);
    return 0;
}