// Задание2. Инверсия старших
// На вход программе подается беззнаковое 32-битное целое число N. Требуется изменить значения всех битов старшего байта числа на противоположные и вывести полученное таким образом число.
#include <stdio.h>
#include <stdint.h>
uint32_t worker(uint32_t);
int main ()
{
uint32_t n, result;
    scanf("%u", &n);
    result = worker (n);
    printf("%u\n", result);
    return 0;
}
uint32_t worker (uint32_t n)
{
    return n ^ 0xFF000000;
}
// тут просто чисто черех XOR инвертирует первые 8 бит
// 0000 0000 0000 0000 0000 0000 0000 0001 ^ на маску
// 1111 1111 0000 0000 0000 0000 0000 0000 ->
// 1111 1111 0000 0000 0000 0000 0000 0001 что равно 4 278 190 081