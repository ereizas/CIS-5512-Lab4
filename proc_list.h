#include "sys/types.h"
#include <stdio.h>
/*
@param pids list of ids of processes started by the shell
@param num_procs number of processes started by the shell
@param proc_limit current limit for number of processes that can be tracked
*/
struct  Process_List{
    pid_t *pids;
    unsigned int num_procs;
    unsigned int proc_limit;
    void (*add)(struct Process_List *proc_list, pid_t new_pid);
};
typedef struct Process_List Proc_List;

void add(Proc_List *proc_list, pid_t new_pid);
Proc_List create_proc_list();