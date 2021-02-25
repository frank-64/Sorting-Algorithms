#include <stdio.h>

int shortest_job_first(struct job jobs[], int len);

void sort(struct job jobs[], int len);

int shortest_job_first(struct job jobs[], int len){
    sort(jobs, len);
    int final_time = 0;
    int current_time = 0;
    for (int i = 0; i < len; ++i) {
        current_time = current_time + jobs[i].run_time;
        final_time = final_time + current_time;
        printf("Job %c was processed. Finish time: %d\n", jobs[i].id,current_time);
    }
    return final_time;
}

void sort(struct job jobs[], int len){
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if(jobs[j].run_time>jobs[j+1].run_time){
                struct job temp = jobs[j];
                jobs[j] = jobs[j+1];
                jobs[j+1] = temp;
            }
        }
    }
}