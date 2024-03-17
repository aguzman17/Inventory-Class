#include <iostream>
using namespace std;

class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
public:
	Inventory();
	Inventory(int, int, double);
	void setItemNumber(int i)
	{
		itemNumber = i;
	}
	void setQuantity(int q)
	{
		quantity = q;
	}
	void setCost(double c)
	{
		cost = c;
	}
	void setTotalCost()
	{
		totalCost = quantity * cost;
	}

	int getItemNumber()
	{
		return itemNumber;
	}
	int getQuantity()
	{
		return quantity;
	}
	double getCost()
	{
		return cost;
	}
	double getTotalCost()
	{
		return totalCost;
	}
};
Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0;
	totalCost = 0;

}
Inventory::Inventory(int newItemNumber, int newQuantity, double newCost)
{
	itemNumber = newItemNumber;
	quantity = newQuantity;
	cost = newCost;
	setTotalCost();
}
int main()
{
	int itemNumber;  
	int quantity;
	double cost;
	double totalCost;

	cout << "Enter item number: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Error. Please enter a valid value for the item number: ";
		cin >> itemNumber;
	}
	cout << "Enter item quantity: "; // collect and validate quantity
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Error. Please enter a valid value for the quantity: ";
		cin >> quantity;
	}
	cout << "Enter item cost: "; 
	cin >> cost;
	while (cost < 0)
	{
		cout << "Error. Please enter a valid value for the cost: ";
		cin >> cost;
	}

	Inventory info(itemNumber, quantity, cost);

	totalCost = info.getTotalCost();
	itemNumber = info.getItemNumber();   
	quantity = info.getQuantity();    
	cost = info.getCost();  

	cout << "Inventory Summary\n";   
	cout << "=================\n";
	cout << "Item number: " << itemNumber << endl;
	cout << "Item quantity: " << quantity << endl;
	cout << "Item cost: " << cost << endl;
	cout << "-----------------\n";
	cout << "Total Cost: " << totalCost << endl;  

	return 0;
}
