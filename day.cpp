// day.cpp

#include "day.h"

Date Day::get_date()
{
    return date;
}

void Day::add_case(Case &new_case)
{
    Case *tmp = &new_case;
    cases.add_case(std::unique_ptr<Case>(tmp));
}

void Day::del_case(int num)
{
    cases.delete_case(num);
}

Case &Day::get_case(int num)
{
    return *cases.get_list().at(num);
}