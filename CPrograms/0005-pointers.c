/******************************************************************************
 * Objective                                                                  *
 *                                                                            *
 * In this challenge, you will learn to implement the basic functionalities   *
 * of pointers in C. A pointer in C is a way to share a memory address among  *
 * different contexts (primarily functions). They are primarily used          *
 * whenever a function needs to modify the content of a variable, of          *
 * which it doesn't have ownership.                                           *
 *                                                                            *
 * In order to access the memory address of a variable, val, we need to       *
 * prepend it with & sign. E.g., &val returns the memory address of val.      *
 *                                                                            *
 * This memory address is assigned to a pointer and can be shared among       *
 * various functions. E.g. int *p = &val will assign the memory address       *
 * of val to pointer p. To access the content of the memory to which the      *
 * pointer points, prepend it with a *. For example, *p will return the       *
 * value reflected by val and any modification to it will be reflected        *
 * at the source (val).                                                       *
 *                                                                            *
 *  void increment(int *v) {                                                  *
 *      (*v)++;                                                               *
 *  }                                                                         *
 *  int main() {                                                              *
 *      int a;                                                                *
 *      scanf("%d", &a);                                                      *
 *      increment(&a);                                                        *
 *      printf("%d", a);                                                      *
 *      return 0;                                                             *
 *  }                                                                         *
 *                                                                            *
 * Task                                                                       *
 *                                                                            *
 * You have to complete the function void update(int *a,int *b), which        *
 * reads two integers as argument, and sets with the sum of them, and         *
 * with the absolute difference of them.                                      *
 *                                                                            *
 * * a' = a + b                                                               *
 * * b' = |a - b|                                                             *
 *                                                                            *
 * Input Format                                                               *
 *                                                                            *
 * The input will contain two integers, a and b, separated by a newline.      *
 *                                                                            *
 * Output Format                                                              *
 *                                                                            *
 * You have to print the updated value of a and b, on two different lines.    *
 *                                                                            *
 * Note: Input/ouput will be automatically handled. You only have to complete *
 * the function described in the 'task' section.                              *
 *                                                                            *
 * Sample Input                                                               *
 *                                                                            *
 * 4                                                                          *
 * 5                                                                          *
 *                                                                            *
 * Sample Output                                                              *
 *                                                                            *
 * 9                                                                          *
 * 1                                                                          *
 *                                                                            *
 * Explanation                                                                *
 *                                                                            *
 * * a' = 4 + 5 = 9                                                           *
 * * b' = |4 - 5| = 1                                                         *
 *****************************************************************************/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = 0, diff = 0;  
    sum = *a + *b;
    diff = (*a - *b) > 0 ? (*a - *b) : (*b - *a);
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


