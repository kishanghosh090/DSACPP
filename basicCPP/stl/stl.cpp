#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {1, "Laptop", "Category 1"},
        {2, "Phone", "Category 2"},
        {3, "Tablet", "Category 1"},
        {4, "Camera", "Category 2"},
        {5, "Monitor", "Category 1"},
    };

    return 0;
}