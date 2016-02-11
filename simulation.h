//
// Created by antoinewdg on 2/11/16.
//

#ifndef HASH_CODE_SIMULATION_H
#define HASH_CODE_SIMULATION_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

#include "product.h"
#include "warehouse.h"
#include "order.h"

using namespace std;

struct Simulation {
    int rows, cols, drones, t_max, payload;
    int n_products, n_warehouses;

    vector<Product> products;
    vector<Warehouse> warehouses;

    Simulation(string filename);


    vector<vector<int>> locateObjects(Order o);
};

#endif //HASH_CODE_SIMULATION_H
