#include <iostream>
#include "vector_3d.h"
using namespace std;

int main() {
    geometry::vector_3d v1(1, 2, 3); 
    geometry::vector_3d v2(4, -2, 5);

    geometry::vector_3d suma = v1 + v2;
    geometry::vector_3d resta = v1 - v2;

    double producto_punto = dot_product(v1, v2);

    cout << "Suma: (" << suma.get_x() << ", " << suma.get_y() << ", " << suma.get_z() << ")\n";
    cout << "Resta: (" << resta.get_x() << ", " << resta.get_y() << ", " << resta.get_z() << ")\n";
    cout << "Producto punto: " << producto_punto << "\n";
}
