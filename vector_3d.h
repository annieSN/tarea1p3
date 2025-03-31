#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_VECTOR_3D_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_VECTOR_3D_H

#include <iostream> 

namespace geometry { 

class vector_3d {
private:
    double x, y, z; 

public:
    vector_3d(double x = 0, double y = 0, double z = 0);

    double get_x() const;
    double get_y() const;
    double get_z() const;

    vector_3d operator+(const vector_3d& other) const;
    vector_3d operator-(const vector_3d& other) const;
    vector_3d& operator=(const vector_3d& other);

    friend double dot_product(const vector_3d& v1, const vector_3d& v2);
};

} 
#endif // PROG3_FUNDAMENTOS_TASK_1_V2025_01_VECTOR_3D_H
