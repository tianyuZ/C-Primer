#include "ex_7.11.h"
int main() {
	Sales_data item1;
	print(cout, item1) << endl;

	Sales_data item2("zhoutianyu");
	print(cout, item2) << endl;

	Sales_data item3("hehe", 3, 20.00);
	print(cout, item3) << endl;

	Sales_data item4(cin);
	print(cout, item4) << endl;

	return 0;
}