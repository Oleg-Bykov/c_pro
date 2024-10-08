// Задание 3. Не пара

// Преподаватели Geek Brains создали набор, содержащий N (1 ≤ N ≤ 1 000 000) натуральных чисел, не превосходящих 1 000 000. 
//Известно, что ровно одно число в этом наборе встречается один раз, а остальные — ровно по два раза.
// Помогите им найти это число. Входные данные: в первой входной строке вводится число N, затем по одному числу в строке вводятся N натуральных чисел,
// не превосходящих 2 000 000 000. Выходные данные: ваша программа должна определить число, встречающееся один раз, и вывести его на экран.

#include <stdio.h>
int main()
{
unsigned int n, x, res = 0;
    scanf("%u", &n);
    for(n;n>0;n--) 
        {
            scanf("%u", &x);
            res ^= x;
        }   
    printf("%u\n", res);
    return 0;
} 
// res = 0000 0000 -> inser 12 -> 0000 0000 ^
//                                0000 1100-> res = 0000 1100
//insert 15 0000 1111 -> 0000 1100^
//                       0000 1111 -> res = 0000 0011
//insert 12 0000 1100 -> 0000 0011^
//                       0000 1100 -> res = 0000 1111= 15