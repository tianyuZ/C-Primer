#include <iostream>
#include <string>
using namespace std;
class Sales_data {
public:
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	unsigned read()  ;
	void write();
	double avg_price() const;
private:
    string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
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

unsigned Sales_data:: read()  {
	cin >> bookNo >> units_sold >> revenue;
	if ((bookNo != "") && (units_sold != 0) && (revenue != 0.0))
		return 1;
	else
		return 0;
}

inline void Sales_data::write() {
	cout << bookNo << " " << units_sold << " " << revenue << endl;
}


int main()
{
     Sales_data total;
	
	if (total.read()) {
	    Sales_data trans;
		while (trans.read()) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				total.write();
				total = trans;
			}
		}
		total.write();
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}








