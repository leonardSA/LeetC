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
    fprintf(stderr, "USAGE: %s STRING\n"                            \
                    "STRING: Any ASCII printable character.\n"      \
                    "1 <= STRING.length <= 2 * 10^5\n"              ,
                    executable);
}


#endif
