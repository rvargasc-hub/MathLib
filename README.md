# MathLib

[![Version](https://img.shields.io/badge/version-1.0.0-blue.svg)](https://github.com/tuusuario/MathLib)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

Librería C++ orientada a objetos para operaciones matemáticas con matrices.

## 📋 Características

- ✅ Creación de matrices de cualquier dimensión
- ✅ Suma de matrices
- ✅ Multiplicación de matrices
- ✅ Validación de dimensiones
- ✅ Manejo de excepciones
- ✅ Interfaz intuitiva

## 🚀 Instalación

### Prerrequisitos
- Compilador C++ con soporte para C++11 o superior
- CMake 3.10+ (opcional)

### Compilación

#### Con g++
```bash
g++ -o programa test/test_matrix.cpp src/Matrix.cpp -I include -std=c++11
```

#### Con CMake
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

## 💻 Uso
```cpp
#include "Matrix.h"

int main() {
    // Crear matrices 2x2
    Matrix A(2, 2), B(2, 2);
    
    // Establecer valores
    A.set(0, 0, 1);
    A.set(0, 1, 2);
    
    // Operaciones
    Matrix C = A.add(B);        // Suma
    Matrix D = A.multiply(B);   // Multiplicación
    
    // Mostrar resultado
    C.print();
    
    return 0;
}
```

## 📚 Documentación

### Clase Matrix

#### Constructores
- `Matrix(int rows, int cols)` - Crea una matriz de tamaño rows × cols

#### Métodos
- `double get(int r, int c)` - Obtiene el valor en la posición (r, c)
- `void set(int r, int c, double value)` - Establece un valor
- `Matrix add(const Matrix& other)` - Suma de matrices
- `Matrix multiply(const Matrix& other)` - Multiplicación de matrices
- `void print()` - Imprime la matriz en consola

## 🧪 Pruebas

Ejecuta el programa de pruebas:
```bash
./test_matrix
```

## 📦 Estructura del Proyecto
```
MathLib/
├── include/
│   └── Matrix.h         # Archivo de cabecera
├── src/
│   └── Matrix.cpp       # Implementación
├── test/
│   └── test_matrix.cpp  # Pruebas
├── CMakeLists.txt       # Configuración CMake
├── README.md            # Este archivo
└── LICENSE              # Licencia MIT
```

## 🔖 Versionado

Este proyecto usa [Versionado Semántico](https://semver.org/):
- **1.0.0** - Primera versión estable

## 👥 Autor

Tu Nombre - [GitHub](https://github.com/tuusuario)

## 📝 Licencia

Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

