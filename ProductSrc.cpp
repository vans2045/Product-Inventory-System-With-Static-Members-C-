#include"Product.h"
#include<string>
 
 
int Product::productCount = 0;
//constructors
Product::Product(){
  	productId = 0;
  	productName = "";
  	price = 0.0;
  	quantity = 0;
  	productCount++;
}
Product::Product(int productId, string productName, float price, int quantity) {
  	this->productId = productId;
  	this->productName = productName;
  	this->price = price;
  	this->quantity = quantity;
  	productCount++;
}
 
//accept function
void Product::accept() {
  	cout << "Enter details of product: \n Product ID" << endl;
  	cin >> productId;
  	cout << "Product Name:" << endl;
  	cin.ignore();
  	getline(cin, productName);
  	cout << "Price:" << endl;
  	cin >> price;
  	cout << "Quantity : " << endl;
  	cin >> quantity;
}
//display function
void Product::display() {
  	cout << "Following are the product details : " << endl;
  	cout << "Product ID : " << productId << endl;
  	cout << "Product Name : " << productName << endl;
  	cout << "Price : " << price << endl;
  	cout << "Quantity : " << quantity << endl;
}
 
// getter function
int Product::getproductId() {
  	return productId;
}
string Product::getproductName() {
  	return productName;
}
float Product::getprice() {
  	return price;
}
int Product::getquantity() {
  	return quantity;
}
 
//setter Functions
int Product::setproductId(int productId) {
  	this->productId = productId;
  	return productId;
}
 
string Product::setproductName(string productName) {
  	this->productName = productName;
  	return productName;
}
 
float Product::setprice(float price) {
  	this->price = price;
  	return price;
}
 
int Product::setquantity(int quantity) {
  	this->quantity = quantity;
  	return quantity;
}
 
//static function
void Product:: showProductCount() {
  	cout << "total Products created :" << productCount << endl;
}
 
//additional Function
float Product::CalculateTotalvalue() {
  	return price * quantity;
}

