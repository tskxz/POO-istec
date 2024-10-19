#include "Invoice.h"
#include <string>

int main(){
	Invoice inv1(1, "Tshirt branca", 4, 10.99);
	cout << inv1.getQuantidade() << endl;
	cout << inv1.getInvoiceAmount() << endl;
}
