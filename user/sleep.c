#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
// #include "user/ulib.h"

int
main(int argc, char *argv[])    {
    
    if(argc <= 1){
    exit(0);
  }
    // printf("arguments taken %d\n", atoi(argv[1]));
    sleep(atoi(argv[1]));
    exit(0);
}