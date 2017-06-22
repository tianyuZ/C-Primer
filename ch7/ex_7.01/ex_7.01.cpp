///tianyu.z
//  6/13/17


#include <iostream>
#include <string>
using namespace std;

class Sales_data {
public:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

 int a=1;

const int& b = a;


int main()
{
	Sales_data total;
	cin >> total.bookNo >> total.units_sold >> total.revenue;
	if ((total.bookNo !="")&&(total.units_sold!=0)&&(total.revenue!=0.0)) {
		Sales_data trans;
		cin >> trans.bookNo >> trans.units_sold >> trans.revenue;
		while ((trans.bookNo !="") && (trans.units_sold != 0) && (trans.revenue != 0.0)) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else {
				cout << total.bookNo << " " <<total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
			cin >> trans.bookNo >> trans.units_sold >> trans.revenue;
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}

