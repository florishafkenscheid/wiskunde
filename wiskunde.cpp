#include<iostream>
#include<math.h>

int uitlegOpdracht(int jaar, double groeifactor, int beginwaarde, int hoeVaak) {
    signed long long int eindwaarde;
    int t = 0;
    for(int i = 0; i <= hoeVaak; i++) {
        eindwaarde = beginwaarde * pow(groeifactor, t);
        if(eindwaarde < 0) {
            return 0;
        }
        std::cout << "t = "<< t << std::endl;
        std::cout << "jaar = " << jaar << std::endl;
        std::cout << "eindwaarde = "<< eindwaarde << std::endl;
        jaar++;
        t++;
    }
    return 0;
}

int quadraticFormula(int a, int b, int c) { 
    float discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant < 0) {
        std::cout << "No real roots" << std::endl;
        return 0;
    }
    float x1 = (-b + sqrt(discriminant)) / (2 * a);
    float x2 = (-b - sqrt(discriminant)) / (2 * a);
    std::cout << x1 <<  " or " << x2 << std::endl;
    return 0;
}


int main() {
    uitlegOpdracht(2010, 1.5, 50, 100);
    quadraticFormula(253, 253, 56);
    return 0;
}