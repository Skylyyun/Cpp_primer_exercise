#include <iostream>
#include "Sales_item.h"
//必须是挨着输入
int main() {
    Sales_item curr_item, var_item;
    if (std::cin >> curr_item){
        int cnt = 1;
        while (std::cin >> var_item){
            if (var_item.isbn() == curr_item.isbn()) {
                ++cnt;
            } else{
                std::cout << curr_item << " occurs " << cnt << " times " << std::endl;
                curr_item = var_item;
                cnt = 1;
            }
        }
        std::cout << curr_item << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}

