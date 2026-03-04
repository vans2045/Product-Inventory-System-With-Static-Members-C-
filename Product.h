#pragma once
#include<iostream>
using namespace std;
 
class Product
{
private:
  	int productId, quantity;
  	string productName;
  	float price;
  	static int productCount;
 
public:
  	Product();
  	Product(int productId,string productName, float price,int quantity);
  	 //accept & display
  	void accept();
  	void display();
 
  	//getter functions
  	int getproductId();
  	string getproductName();
  	float getprice();
  	int getquantity();
 
  	//setter Functions
  	int setproductId(int productId);
  	string setproductName(string productName);
  	float setprice(float price);
  	int setquantity(int quantity);
 
  	//static Function
  	static void showProductCount();
 
  	//additional Function
  	float CalculateTotalvalue();
};
