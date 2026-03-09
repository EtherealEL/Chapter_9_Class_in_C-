
#include <iostream>
using namespace std;

class ShoppingItem
{
private:
	string item_name;
	float price;
	int quantity;

public:
	void set_item(string name, float prc, int qty)
	{
		item_name = name;

		if (prc > 0)
		{
			price = prc;
		}
		else
		{
			prc = 0;
		}
		if (qty > 0)
		{
			quantity = qty;
		}
		else
		{
			quantity = 0;
		}
	}


	float get_total_cost()
	{
		return price * quantity;
	}

	void display_bill()
	{
		cout << "Item Name: " << item_name << endl;
		cout << "Price: " << price << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Total Cost: " << get_total_cost() << endl;
	}
};






int main()
{
	ShoppingItem item1;

	item1.set_item("Poptart", 2.6, 8);
	item1.display_bill();

	return 0;


}

