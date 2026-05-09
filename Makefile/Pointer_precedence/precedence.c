#include<stdio.h>
#include "precedence.h"


void pre(int *as,int s){

       printf("*p++=%d\n",*as++);
       printf("(*p)++=%d\n",(*as)++);
       printf("as[5]=%d\n",as[5]);

}
