#include "built_in.h"

#include <stdio.h>
#include <readline/history.h>

void history() {
    HIST_ENTRY** hist_list = history_list();
    for (int i = 0; hist_list[i]; ++i)
        printf("%6d  %s", i + 1, hist_list[i]->line);
}