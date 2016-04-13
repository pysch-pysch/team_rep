#include "year.h"


Date Year::get_date()
{
    return date;
}

Month &Year::get_month(int num)
{
    return *monthlist.at(num);
}
