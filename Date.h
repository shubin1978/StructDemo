#ifndef INC_1_STRUCT_DEMO_DATE_H
#define INC_1_STRUCT_DEMO_DATE_H

#include <string>

using namespace std;

enum DateFormat{
    Normal = 1, //dd.mm.yyyy
    ReversNormal = 2, //yyyy.mm.dd
    SpecialNormal = 3, //dd-mm-yyyy
    ReversSpecialNormal = 4//yyyy-mm-dd
};

struct Date{
    int day;
    int month;
    int year;

    string ToString(DateFormat format = DateFormat::Normal){
        switch (format) {
            case DateFormat::Normal: // dd.mm.yyyy
                return to_string(day) + "." + to_string(month) + "." + to_string(year);
            case DateFormat::ReversNormal://yyyy.mm.dd
                return to_string(year) + "." + to_string(month) + "." + to_string(day);
            case DateFormat::SpecialNormal: // dd-mm-yyyy
                return to_string(day) + "-" + to_string(month) + "-" + to_string(year);
            case DateFormat::ReversSpecialNormal:
                return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
        }
    }
};

Date CreateDate( int year, int month, int day){
    Date date;
    date.year = year;
    date.month = month;
    date.day = day;
    return  date;
}

#endif //INC_1_STRUCT_DEMO_DATE_H
