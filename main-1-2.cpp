#include<iostream>
#include"Asset.h"
#include"AssetPortfolio.h"

int main(){
    Asset a1(1000, "inventory");
    Asset a2(3000, "loan");
    Asset a3(10, "equipment");

    AssetPortfolio p1;
    std::cout << p1.get_num_assets() << std::endl;
    std::cout << p1.has_asset("inventory") << std::endl; 
    std::cout << p1.add_asset(a1) << std::endl;

    AssetPortfolio p2(3);
    std::cout << p2.get_num_assets() << std::endl;
    std::cout << p2.has_asset("inventory") << std::endl;
    std::cout << p2.add_asset(a1) << std::endl;
    std::cout << p2.get_num_assets() << std::endl;
    std::cout << p2.has_asset("Stock") << std::endl;
    std::cout << p2.add_asset(a2) << std::endl;
    std::cout << p2.get_num_assets() << std::endl;
    std::cout << p2.has_asset("equipment") << std::endl;
    std::cout << p2.add_asset(a3) << std::endl;
}