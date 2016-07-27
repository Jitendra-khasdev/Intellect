/*
 * =============================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Shashank likes strings in which consecutive characters are
 *                  different. For example, he likes ABABA, while he doesn't 
 *                  like ABAA. Given a string containing characters and only,
 *                  he wants to change it into a string he likes. To do this,
 *                  heris allowed to delete the characters in the string.
 *                  Task is to find the minimum number of required deletions.
 *
 *        Version:  1.0
 *        Created:  Sunday 05 June 2016 06:30:28  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jitendra Kumar Khasdev, jkhasdev@gmail.com
 *        Company:  NONE
 *
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int test_cases = 0;
    long int size = pow(10, 5);
    char str_arr[size], temp;

    scanf ("%d", &test_cases);
    scanf("%c", &temp);

    while (test_cases--) {
        fgets(str_arr, sizeof(str_arr), stdin);
        size = strlen(str_arr);
        printf ("%d\n", str_delition (str_arr, size));
    }
    return 0;
}

int str_delition (char *str, long int size)
{
    long int i, del_cnt; 
    
    i = del_cnt = 0;
    while (i < size) {
        if (!((str[i] == 'A' && str[i + 1] == 'B' ) ||
                    (str[i] == 'B' && str[i + 1] == 'A'))) {
            i = i + 2;
            if (del_cnt)
                del_cnt++;
        } else {
            i = i +1;
            del_cnt++;
        }
    }

    return del_cnt;
}
