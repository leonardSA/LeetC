#ifndef _USAGE_H_
#define _USAGE_H_

#include <stdio.h>

/**
 * @brief 
 *
 * @param executable
 */
void printUsage(const char* executable);

void printUsage(const char* executable) {
    fprintf(stderr, "USAGE: %s INTEGER_MATRIX\n"                \
                    " e.g.  %s [[1,2,3],[4,5]]\n"               \
                    "INTEGER_MATRIX:\n"                         \
                    "-  format:    [INTEGER_ARRAY, ...]\n"      \
                    "-  length:    1 <= length <= 50\n"         \
                    "INTEGER_ARRAY:\n"                          \
                    "-  format:  [INTEGER1, ...INTEGERN]\n"     \
                    "-  length:  1 <= length  <= 50\n"         \
                    "-  element: 1 <= INTEGER <= 100\n"        ,
                    executable, executable);
}


#endif
