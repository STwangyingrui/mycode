#include <stdio.h>
#include <cstdlib>
#include <execinfo.h>

#define MAX_TRACE_DEPTH 20

void printStackTrace() {
    void *buffer[MAX_TRACE_DEPTH];
    char **strs;

    int nptrs = backtrace(buffer, MAX_TRACE_DEPTH);

    strs = backtrace_symbols(buffer, nptrs);
    
    if (strs == NULL) {
        perror("backtrace_symbols");
        return;
    }

    printf("Stack Trace:\n");
    for (int i = 0; i < nptrs; i++) {
        printf("%s\n", strs[i]);
    }

    free(strs);
}

void foo() {
    printStackTrace();
}

int main() {
    foo();
    return 0;
}
