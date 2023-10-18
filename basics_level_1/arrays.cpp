#include <iostream>
#include <vector>

int main()
{
    double temperature_list[4] = {10, 10, 10, 10};
    std::cout <<temperature_list[1]<< std::endl;

    std::vector<double> nums = { 2.5, 3.5, 4.5 };
    std::cout << nums.at(1) << std.endl;

    return 0;
}