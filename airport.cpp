#include <iostream>
#include <vector>

int minimumPlanesRequired(const std::vector<int>& fuel) {
    int n = fuel.size();
    int planes = 0;
    int currentFuel = fuel[0];

    for (int i = 1; i < n; i++) {
        currentFuel--;

        if (currentFuel < 0) {
            return -1;  // Impossible to reach the last airport
        }

        if (fuel[i] > currentFuel) {
            planes++;
            currentFuel = fuel[i];
        }
    }

    return planes;
}

int main() {
    int n;
    std::cout << "Enter the number of airports: ";
    std::cin >> n;

    std::vector<int> fuel(n);
    std::cout << "Enter the fuel units for each airport: ";
    for (int i = 0; i < n; i++) {
        std::cin >> fuel[i];
    }

    int planes = minimumPlanesRequired(fuel);

    if (planes == -1) {
        std::cout << "It is not possible to reach the last airport." << std::endl;
    } else {
        std::cout << "Minimum number of planes required: " << planes << std::endl;
    }

    return 0;
}
