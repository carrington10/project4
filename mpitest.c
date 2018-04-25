#include <mpi.h>
#include <stdio.h>
#include <unistd.h>
void task5(){
printf("this is for task 5");

}


int main(int argc, char **argv)
{
  int rank;
  char hostname[256];

  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  gethostname(hostname,255);

  printf("Hello world! check  I am process number: %d on host %s\n", rank, hostname);

if(rank==5){
task5();
}

  MPI_Finalize();

  return 0;
}
