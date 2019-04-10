# include <iostream>
# include <string>

double milesToKilometer(double miles) {
	return miles* 1.60934;
}
int main (){
	std::cout << "How many miles? \n";
	double miles;
	std::cin >> miles;
	std::cout << "This is equal to: " << milesToKilometer(miles) << " km \n";
	return 0;
}