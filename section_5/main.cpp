#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int small_rooms {0};
    int big_rooms {0};
    const int valid_est {30}; // days
    const double tax {0.06};
    const double small_room_price {25.0},
    big_room_price {35.0};

    cout << "Welcome to Frank's Carpet Cleaning Service!\n\n";
    cout << "How many small rooms to clean?: ";
    cin >> small_rooms;
    cout << "How many big rooms to clean?: ";
    cin >> big_rooms;
    
    cout << "\nEstimate for carpet cleaning service\n"
         << "Number of small rooms: " << small_rooms << '\n'
         << "Number of big rooms: " << big_rooms << '\n'
         << "Price per small room: " << small_room_price << '\n'
         << "Price per big room: " << big_room_price << '\n';
    double cost = small_rooms * small_room_price + big_rooms * big_room_price;
    double taxes = cost * tax;
    cout << "Cost: " << cost << '\n'
         << "Tax: " << taxes << '\n'
         << "======================================\n"
         << "Total estimate: " << cost + taxes << '\n'
         << "This estimate is valid for " << valid_est << " days\n";
         

    
    return 0;
}
