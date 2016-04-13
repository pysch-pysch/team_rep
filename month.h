//
// Created by Ралина on 13.04.16.
//

#ifndef PROJECT_TECHNOSPHERE_C_MASTER_V2_MONTH_H
#define PROJECT_TECHNOSPHERE_C_MASTER_V2_MONTH_H

#include "day.h"
#include "cost.h"

class Month
{
public:
    Month(Date date): date(date)
    {
        int numbers_days;
        int year = date.get_date()["year"];
        switch (date.get_date()["month"]) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                numbers_days = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                numbers_days = 30;
                break;
            default:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    numbers_days = 29;
                } else {
                    numbers_days = 28;
                }
        }
        std::map<std::string, int> date_map = date.get_date();
        for (int i = 1; i <= numbers_days; i++) {
            date_map["day"] = i;
            daylist.push_back(std::move(std::make_unique<Day>(date_map)));
        }
    }

    Date get_date();
    Day &get_day(int num);
    Case &get_case(int num);
    Cost &get_cost_reg(int num);
    Cost &get_cost_irreg(int num);
    void add_case(Case &new_case);
    void add_cost_reg(Cost &new_cost);
    void add_cost_irreg(Cost &new_cost);
    void del_case(int num);
    void del_cost_reg(int num);
    void del_cost_irreg(int num);

private:
    Date date;
    std::vector<std::unique_ptr<Day>> daylist;
    CostList costs;
    CaseList cases;
};

#endif //PROJECT_TECHNOSPHERE_C_MASTER_V2_MONTH_H
