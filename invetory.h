#ifndef INVETORY_H
#define INVETORY_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//classe représentant l'inventaire
class invetory
{
	private:
	    vector<product>products;
	public:
		void addProduct(const Product& product);
		void removeProduct(const string& productName);
		void displayInventory();
		Product*findProduct(const string& productName);
	
};

#endif
