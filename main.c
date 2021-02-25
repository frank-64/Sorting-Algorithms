#include "FCFS.c"
#include "SJF.c"

int main(){
    // First array of jobs
    struct job jobs1[] = {{'A',8,0, },{'B',4,0}, {'C',4,0}, {'D',4,0}};
    int len = 4;
    for (int i = 0; i < 4; ++i) {
        printf("Job: %c, Duration: %d, Arrival Time: %d \n", jobs1[i].id, jobs1[i].run_time, jobs1[i].arrival_time);
    }
    printf("\n");
    printf("First-come first-serve: \n");
    int FCFS_time = first_come_first_serve(jobs1, len);
    printf("Total time for all jobs: %d\n", FCFS_time);
    printf("Mean time for the jobs: %f\n", (float) FCFS_time/len);

    printf("\n");
    printf("\n");

    printf("Shortest job first: \n");
    int SJF_time = shortest_job_first(jobs1, len);
    printf("Total time for all jobs: %d\n", SJF_time);
    printf("Mean time for the jobs: %f\n", (float) SJF_time/len);
}