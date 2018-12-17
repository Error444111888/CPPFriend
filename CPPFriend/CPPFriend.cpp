// CPPFriend.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


// When you're calling a friend make sure to write tne entire name with variables
void BTCPriceFriend(BTCPrice &BTCo) 
{
	BTCo.ThePrice = 3100;
	cout << BTCo.ThePrice << endl;

}


int main()
{
	BTCPrice BTCPriceObj;
	BTCPriceFriend(BTCPriceObj);



	cin.get();
}


