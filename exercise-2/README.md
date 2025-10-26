# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros?

No se puede usar el operador módulo con operandores no enteros, ya que nos daría un error de compilación.

¿Se puede usar con números negativos?

Sí se puede usar con números negativos.

Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué.

   | Entero 1 | Entero 2 | Expresión        | Salida |
   | -------- | -------- | ---------------- | ------ |
   | 73       | 22       | cout << 73 % 22; |    7   |
   | 0        | 100      | cout << 0 % 100; |    0   |
   | 100      | 0        | cout << 100 % 0; | ERROR  |
   | -3       | 3        | cout << -3 % 3;  |    0   | 
   | 9        | 4.5      | cout << 9 % 4.5; | ERROR  | 
   | 16       | 2        | cout << 16 % 2;  |    0   |

Porque no es válido dividir entre 0 en programación en poner 100 % 0 y por eso da ERROR

El operador módulo solo funciona con enteros en el 9 % 4.5 por eso da ERROR

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if?

Nos marcaría error. Osea "IF" no haria nada, aunque la condición sea verdadera.

3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]

Par:

![alt text]({805543F5-14DF-4650-AFDA-86F61F80BBCD}.png)

Impar:

![alt text]({67DDAB07-AC9C-4F72-B704-ABC5E6EA0AED}.png)

## ✅ Resultado

Cuando es múltiplo:

![alt text]({E50CD8AE-AC3C-4088-AA86-67E7632850FE}.png)

Cuando no es múltiplo:

![alt text]({A7A07B15-865E-4493-921D-3E2187EFF704}.png)