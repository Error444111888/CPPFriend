

#ifndef PCH_H
#define PCH_H


class BTCPrice
{
public:
	BTCPrice() { ThePrice = 3200; }

private:
	int ThePrice;

	friend void BTCPriceFriend(BTCPrice &BTCo); // <<< This makes it a friend to be called later

};


#endif //PCH_H
