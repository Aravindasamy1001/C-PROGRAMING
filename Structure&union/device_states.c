#include<stdio.h>
typedef enum {
init=0,
running=1,
error=2,
}devicestate;

typedef struct{
int device_id;
devicestate state;
}device;

void updatestate(device*dvi,devicestate newstate){
dvi->state=newstate;
}

int main(){
device d1={222,init};
printf("initial state=%d\n",d1.state);

updatestate(&d1,running);
printf("after start=%d\n",d1.state);

updatestate(&d1,running);
printf("after update=%d\n",d1.state);

return 0;
}


