#include "FCFS.c"

int main(){
    // First array of jobs
    struct job jobs1[] = {{'A',8,0, },{'B',4,0}, {'C',4,0}, {'D',4,0}};

    for (int i = 0; i < 4; ++i) {
        printf("Job: %c, Duration: %d, Arrival Time: %d \n", jobs1[i].id, jobs1[i].run_time, jobs1[i].arrival_time);
    }
    int FCFS_time = first_come_first_serve(jobs1);
}