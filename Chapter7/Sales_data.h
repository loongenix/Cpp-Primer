//
// Created by Jeremy on 2018/1/22.
//

#ifndef CHAPTER7_SALES_DATA_H
#define CHAPTER7_SALES_DATA_H

#include <string>

#endif //CHAPTER7_SALES_DATA_H

class Sales_data {

    friend Sales_data add(const Sales_data &, const Sales_data &);

    friend std::ostream &print(std::ostream &, const Sales_data &);

    friend std::istream &read(std::istream &, Sales_data &);

public:
    // public部分，对象看起来是怎么样的。
    std::string isbn() const { return bookNo; } // inline function
    Sales_data &combine(const Sales_data &);


private:
    // private部分，数据成员。
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// Sales_data的非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);

std::ostream &print(std::ostream &, const Sales_data &);

std::istream &read(std::istream &, Sales_data &);
