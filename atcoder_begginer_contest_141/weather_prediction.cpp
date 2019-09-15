#include <iostream>
#include <string>

using namespace std;

int main() {
    string weather;
    cin >> weather;
    if (weather == "Sunny") {
        cout << "Cloudy" << endl;
    } else if (weather == "Cloudy") {
        cout << "Rainy" << endl;
    } else if (weather == "Rainy") {
        cout << "Sunny" << endl;
    }
}