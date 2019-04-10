# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>


int gcd(int a, int b) {
  //using Euclid's algorithm
  if (b == 0) return a;
  return gcd(b, a%b);
}

TEST_CASE("describe_gcd", "[gcd]") {
  REQUIRE(gcd(2 ,4) == 2);
  REQUIRE(gcd(9 ,6) == 3);
  REQUIRE(gcd(3 ,7) == 1);
  REQUIRE(gcd(48 ,18) == 6);
}

int checkSum(int i) {
	int result = 0;
	int temp;
	while (i > 0) {
    temp = i % 10; //get last digit
		i = i / 10; //reduce i by last digit
		result = result + temp; //add last digit to result
	}
	if (result >= 10) {
		return checkSum(result); //do again if result more then two digits
	}
	else {
		return result;
	}
}

TEST_CASE("describe_checkSum", "[checkSum]") {
  REQUIRE(checkSum(117516) == 3);
  REQUIRE(checkSum(380511905) == 5);
}

int sumMultiples(int a, int b) {
	int sum = 0; // storage
	for (int run = a; run <= b; run++) {
		if (run % 3 == 0 || run % 5 == 0) {
			sum = sum + run;
		}
	}
	return sum;
}

TEST_CASE("describe_sumMultiples", "[sumMultiples]") {
  REQUIRE(sumMultiples(1, 1000) == 234168);
}

double fract(double d){
  if(d > 0) {
    return (d - floor(d));
  }
  else{
    return (d - ceil(d));
  }
}

TEST_CASE("describe_fract", "[fract]") {
  REQUIRE(fract(5.134) == Approx(0.134));
  REQUIRE(fract(-5.134) == Approx(-0.134));
}

double cylinder_volume(float radius, float hight) {
	return (M_PI*radius*radius*hight);
}

double cylinder_area(float radius, float hight) {	
	return (2 * M_PI*radius*radius + 2 * M_PI*radius*hight);
}

TEST_CASE("describe_cylinder_volume", "[cylinder_volume]") {
  REQUIRE(cylinder_volume(10,5) == Approx(1570.8));
  REQUIRE(cylinder_volume(3,7) == Approx(197.92));
}

TEST_CASE("describe_cylinder_area", "[cylinder_area]") {
  REQUIRE(cylinder_area(10,5) == Approx(942.478));
  REQUIRE(cylinder_area(3,7) == Approx(188.496));
}

int main(int argc, char*argv[]){
  return Catch::Session().run(argc, argv);
}
