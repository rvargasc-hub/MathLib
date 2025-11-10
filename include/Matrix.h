#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include <stdexcept>
//agregue este comentario
class Matrix {
private:
    std::vector<std::vector<double>> data;  // Almacena los datos de la matriz
    int rows, cols;                          // Dimensiones

public:
    Matrix(int r, int c);                    // Constructor
    double get(int r, int c) const;          // Obtener elemento
    void set(int r, int c, double value);    // Establecer elemento
    Matrix add(const Matrix& other) const;   // Suma de matrices
    Matrix multiply(const Matrix& other) const; // Multiplicación
    void print() const;                      // Imprimir matriz
};
#endif