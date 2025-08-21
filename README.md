# Gramticas Presentación 1

Esta actividad implementa un reconocedor de cadenas para diferentes gramáticas mostradas en la presentación número 1, tanto en Python como en C.

## Gramáticas implementadas

### 1. Gramatica 1:

<img width="809" height="386" alt="image" src="https://github.com/user-attachments/assets/e95c6f87-ccf1-4848-8330-c510f494f732" />

Lenguaje formado por cadenas que se leen igual al derecho y al revés.

Ejemplos válidos: 0, 101, 1001

Ejemplos inválidos: 10, 011

### 2. Gramatica 2:

<img width="814" height="480" alt="image" src="https://github.com/user-attachments/assets/7f5b4943-c913-4a8f-9300-76ab42c9a1cd" />

Cadenas de n letras a seguidas de n+1 letras b.

Ejemplos válidos: b, abb, aabb, aaabbb

Ejemplos inválidos: ab, aabbb

### Gramatica 3:

<img width="836" height="478" alt="image" src="https://github.com/user-attachments/assets/20b9ffa6-878a-4f30-a67c-0051bded0be0" />

n debe ser mayor a 0 (es decir, al menos una a).

Ejemplos válidos: abb, aabb, aaabbb

Ejemplos inválidos: b, aabbb

### Gramatica 4:

<img width="810" height="483" alt="image" src="https://github.com/user-attachments/assets/8a3b034e-6370-496f-961d-94740f23fc22" />

Lenguaje finito con solo dos cadenas posibles.

Válidas: abb, ab

Inválidas: aabb, aba

### Gramatica 5: 

<img width="829" height="455" alt="image" src="https://github.com/user-attachments/assets/7fd20ab5-41ec-4f2d-a2a8-87d7f3ee6859" />

Cadenas que comienzan con a, luego se repite ab cero o más veces, y terminan en b.

Ejemplos válidos: ab, aabb, aababb

Ejemplos inválidos: aaababbb, aba, aab
