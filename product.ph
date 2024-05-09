#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
using namespace std;

class product
{
	private:
		string name;
		int quantity;
		float price;
		
	public:
		product(string name,int quantity,float price):name(name),quantity(quantity),price(price){}
	    string getName();
	    int getQantity();
	    float getPrice();
	    void setQuantity(int x);
};

#endif
