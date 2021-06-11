
//Olivia Walker
//Algorithm

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;
    int i;
    for (i = 0; i < 6; i++) {
        num.push_back(i);
    }
    random_shuffle(num.begin(), num.end());
    for (auto i : num)
        cout << "\n" << i;

    cout << "\nThe minimum value is " << *min_element(num.begin(), num.end());
    cout << "\nThe maximum value is " << *max_element(num.begin(), num.end());
}


