//
// Created by rudri on 10/11/2020.
//
#include <iostream>
#include "vector_3d.h"

int main() {
    geometry::d3::vector_3d v1(1, 2, 3);
    geometry::d3::vector_3d v2(4, -2, 5);

    geometry::d3::vector_3d suma = v1 + v2;

    geometry::d3::vector_3d resta = v1 - v2;

    double producto_punto = dot_product(v1, v2);

    std::cout << "Suma: (" << suma.get_x() << ", " << suma.get_y() << ", " << suma.get_z() << ")\n";
    std::cout << "Resta: (" << resta.get_x() << ", " << resta.get_y() << ", " << resta.get_z() << ")\n";
    std::cout << "Producto punto: " << producto_punto << "\n";

    return 0;
}
