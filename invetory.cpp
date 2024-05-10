#include "invetory.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void invetory::addProduct(const Product& product){
	products.push_back(product);
}
void invetory::removeProduct(const string& productName){
	for (auto it=products.begin();it!=products.end();++it){
		if(it->getNme()==productNme){
			products.erase(it);
			break;
		}
	}
} 
void invetory::displayInventory(){
	cout<<"inventory:\n";
	for(const auto& product:products){
		cout<<"name:"<<product.getName()<<",Quantity:"<<product.getQuantity()<<",Price:"<<product.getPrice()<<endl;
	}
}
product*findProduct(const string& productName){
	for(auto& product:products){
		if(product.getName()==productName){
			return &product;
		}
	}
	return nullptr;
}
