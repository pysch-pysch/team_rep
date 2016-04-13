#include "month.h"


Date Month::get_date()
{
    return date;
}

Day &Month::get_day(int num)
{
    return *daylist.at(num);
}


Case &Month::get_case(int num)
{
    return *cases.get_list().at(num);
}

Cost &Month::get_cost_reg(int num)
{
    return *costs.get_regular().at(num);
}

Cost &Month::get_cost_irreg(int num)
{
    return *costs.get_irregular().at(num);
}

void Month::add_case(Case &new_case)
{
    cases.add_case(std::move(std::unique_ptr<Case>(&new_case)));
}

void Month::add_cost_reg(Cost &new_cost)
{
    costs.add_regular(std::move(std::unique_ptr<Cost>(&new_cost)));
}

void Month::add_cost_irreg(Cost &new_cost)
{
    costs.add_irregular(std::move(std::unique_ptr<Cost>(&new_cost)));
}

void Month::del_case(int num)
{
    cases.delete_case(num);
}

void Month::del_cost_reg(int num)
{
    costs.delete_reg(num);
}

void Month::del_cost_irreg(int num)
{
    costs.delete_irreg(num);
}