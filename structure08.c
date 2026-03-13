#include<stdio.h>
typedef struct {
int rose;
float zinnia;
int tulip;
}flower;

void odor(flower *flow){
flow->rose=4;
flow->zinnia=6.00;
flow->tulip=8;
printf("rose: %d\n",flow->rose);
printf("zinnia: %.2f\n",flow->zinnia);
printf("tulip: %d\n",flow->tulip);
}

int main(){
flower d={3,5.55,7};

odor(&d);

return 0;
}
