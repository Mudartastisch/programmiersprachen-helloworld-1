// least-commom-multiple 

//theorie lcm(a,b) = (|a*b|) / (gcd(a,b))
// lcm(1,20) 1 is a prime so we can assume gcd(a,b) = 1 

#include <iostream>

long simple_lcm = 1;

int main() {
    for(int i = 1; i <= 20; i++) {
        simple_lcm = simple_lcm * i;
        //std::cout << "i : " << i << "\n";
        //std::cout << "lcm : " << simple_lcm << "\n";
    }
    

    std::cout << "The lcm for 1..20 is " << simple_lcm << "\n";  
}