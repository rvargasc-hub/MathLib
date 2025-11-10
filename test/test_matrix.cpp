#include "../include/Matrix.h"
#include <iostream>

int main() {
    try {
        std::cout << "=== PRUEBAS DE LA LIBRERIA MATHLIB ===\n\n";

        // Crear matrices
        Matrix A(2, 2), B(2, 2);
        
        // Inicializar matriz A
        A.set(0, 0, 1); A.set(0, 1, 2);
        A.set(1, 0, 3); A.set(1, 1, 4);
        
        // Inicializar matriz B
        B.set(0, 0, 5); B.set(0, 1, 6);
        B.set(1, 0, 7); B.set(1, 1, 8);
        
        // Mostrar matrices originales
        std::cout << "Matriz A:\n";
        A.print();
        
        std::cout << "\nMatriz B:\n";
        B.print();
        
        // Suma de matrices
        Matrix C = A.add(B);
        std::cout << "\nSuma (A + B):\n";
        C.print();
        
        // Multiplicacion de matrices
        Matrix D = A.multiply(B);
        std::cout << "\nMultiplicacion (A × B):\n";
        D.print();
        
        std::cout << "\n✓ Todas las pruebas completadas exitosamente!\n";
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}