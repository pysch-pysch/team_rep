#ifndef PROJECT_TECHNOSPHERE_C_MASTER_V2_YEAR_H
#define PROJECT_TECHNOSPHERE_C_MASTER_V2_YEAR_H

#include "month.h"

class Year
{
public:
    Year(Date date): date(date)
    {
        std::map<std::string, int> date_map = date.get_date();
        for (int i = 1; i <= 12; i++) {
            date_map["month"] = i;
            monthlist.push_back(std::move(std::make_unique<Month>(date_map)));
        }
    }

    Date get_date();
    Month &get_month(int num);

private:
    Date date;
    std::vector<std::unique_ptr<Month>> monthlist;
};

#endif //PROJECT_TECHNOSPHERE_C_MASTER_V2_YEAR_H
