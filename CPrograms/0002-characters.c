/******************************************************************************
 * Objective                                                                  *
 *                                                                            *
 * This challenge will help you to learn how to take a character, a string    *
 * and a sentence as input in C.                                              *
 *                                                                            *
 * To take a single character ch as input, you can use scanf("%c", &ch );     *
 * and printf("%c", ch) writes a character specified by the argument char     *
 * to stdout                                                                  *
 *                                                                            *
 *      char ch;                                                              *
 *      scanf("%c", &ch);                                                     *
 *      printf("%c", ch);                                                     *
 *                                                                            *
 * This piece of code prints the character ch.                                *
 *                                                                            *
 * You can take a string as input in C using scanf("%s", s). But, it accepts  *
 * string only until it finds the first space.                                *
 *                                                                            *
 * In order to take a line as input, you can use scanf("%[^\n]%*c", s); where *
 * s is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s.    *
 * Here, [] is the scanset character. ^\n stands for taking input until a     *
 * newline isn't encountered. Then, with this %*c, it reads the newline       *
 * character and here, the used * indicates that this newline character       *
 * is discarded.                                                              *
 *                                                                            *
 * Note: After inputting the character and the string, inputting the sentence *
 * by the above mentioned statement won't work. This is because, at the end   *
 * of each line, a new line character (\n) is present. So, the statement:     *
 * scanf("%[^\n]%*c", s); will not work because the last statement will read  *
 * a newline character from the previous line. This can be handled in a       *
 * variety of ways and one of them being: scanf("\n"); before the             *
 * last statement.                                                            *
 *                                                                            *
 * Task                                                                       *
 *                                                                            *
 * You have to print the character, ch, in the first line. Then print s in    *
 * next line. In the last line print the sentence, sen.                       *
 *                                                                            *
 * Input Format                                                               *
 *                                                                            *
 * First, take a character, ch as input.                                      *
 * Then take the string, s as input.                                          *
 * Lastly, take the sentence sen as input.                                    *
 *                                                                            *
 * Output Format                                                              *
 *                                                                            *
 * Print three lines of output. The first line prints the character, ch.      *
 * The second line prints the string, s.                                      *
 * The third line prints the sentence, sen.                                   *
 *                                                                            *
 * Sample Input 0                                                             *
 *                                                                            *
 * C                                                                          *
 * Language                                                                   *
 * Welcome To C!!                                                             *
 *                                                                            *
 * Sample Output 0                                                            *
 *                                                                            *
 * C                                                                          *
 * Language                                                                   *
 * Welcome To C!!                                                             *
 *                                                                            *
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100] = {};

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", s);
    printf("%s\n", s);
    scanf("\n");
    memset(s, 0, sizeof(s));
    scanf("%[^\n]%*c", s);
    printf("%s\n", s);
    return 0;
}
