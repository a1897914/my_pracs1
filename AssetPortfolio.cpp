#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio() : size(0) {}

AssetPortfolio::AssetPortfolio(int size) : size(size) {}

int AssetPortfolio::get_num_assets() {
    return assets.size();
}

bool AssetPortfolio::has_asset(std::string product) {
   for (int i = 0; i < assets.size(); i++) {
    if (assets[i].get_product_type() == product) {
        return true;
    }
    }

    return false;
}

std::vector<Asset> AssetPortfolio::get_assets() {
    return assets;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (assets.size() < size) {
        assets.push_back(new_asset);
        return true;
    }
    return false;
}

AssetPortfolio::~AssetPortfolio() {}
