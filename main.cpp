#include<iostream>
int main{
//création de quelques produits
 product product 1 ("Laptop",10,999.99);
product product2("Samartphone",20,599.99);
// création de linventaire 
inventory inventory ;
// Ajout des produits à linventaire 
inventory.addProduct(product1);
inventory.addproduct(product2);
//affichage de l'inventaire
inventory.displayinventory();
//Recherche d'un produit dans l'inventaire 
string productName = "Laptop";
product*foundproduct = inventory.findproduct(productName);
if (foundproduct != nullptr ){
	cout <<"Foundproduct :"<<foundproduct -> getName()<<endl;
	
}else{
	cout <<"product not found."<<endl;
}
return 0;
}
