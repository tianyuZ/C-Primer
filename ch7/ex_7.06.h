#ifndef EX_7_06_H
#define EX_7_06_H
#include <iostream>
#include <string>
using namespace std;
class Sales_data {
public:
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	//unsigned read();
	//void write();
	double avg_price() const;
public:
	string bookNo;                    //ISBN号
	unsigned units_sold = 0;          //售出总数
	double revenue = 0.0;             //售出总价
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

inline double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

//unsigned Sales_data::read() {
//	cin >> bookNo >> units_sold >> revenue;
//	if ((bookNo != "") && (units_sold != 0) && (revenue != 0.0))
//		return 1;
//	else
//		return 0;
//}

//inline Sales_data::write() {
//	cout << bookNo << " " << units_sold << " " << revenue << " "<<avg_price()<<endl;
//}








Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum;
	sum = lhs.combine(rhs);
	return sum;
}

istream& read(istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream& print(ostream& os, Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " <<
		item.avg_price();
	return os;
}









#endif // !EX_7_06_H

