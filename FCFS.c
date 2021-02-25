#include <stdio.h>

struct job
{
    char id;
    int run_time;
    int arrival_time;
};

int first_come_first_serve(struct job jobs[], int len);


int first_come_first_serve(struct job jobs[], int len){
    int current_time = 0;
    for (int i = 0; i < len; ++i) {
        current_time = current_time + jobs[i].run_time;
        printf("Job %c was processed. Finish time: %d\n", jobs[i].id,current_time);
    }
    return current_time;
}