/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 4 - This program calculates coversion of $50 USD to Mexican Pesos, 
	 the fees, and the total yield of the exchange.                            */

#include <stdio.h>
const int AMOUNTEXCHANGED = 50;
const float BANKFEE = 0.015;
const char COUNTRYNAME[] = "Mexico";
const char CURRENCYNAME[] = "pesos";

int main() {
	float exchangeRate = 13.71;
	float exchangeValue, exchangeFee, customerReceives;

	exchangeValue = AMOUNTEXCHANGED * exchangeRate;
	exchangeFee = BANKFEE * exchangeValue;
	customerReceives = exchangeValue - exchangeFee;

	printf("Country:            %s\n", COUNTRYNAME);
	printf("Exchange Rate:      %.2f %s per dollar\n", exchangeRate, CURRENCYNAME);
	printf("Amount Exchanged:   $ %d\n\n", AMOUNTEXCHANGED);
	printf("Exchange Value:          %10.2f %s\n", exchangeValue, CURRENCYNAME);
	printf("Exchange Fee:            %10.2f %s\n", exchangeFee, CURRENCYNAME);
	printf("                            -------\n");
	printf("Total Given to Customer: %10.2f %s\n", customerReceives, CURRENCYNAME);

	return 0;
}