#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"
#include <vector>

class AssetPortfolio {
public:
    AssetPortfolio();
    AssetPortfolio(int size);
    int get_num_assets();
    bool has_asset(std::string product);
    Asset *get_assets(); 
    bool add_asset(Asset new_asset);
    ~AssetPortfolio();

private:
    int size;
    std::vector<Asset> assets;
};

#endif

