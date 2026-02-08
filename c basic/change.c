#include<stdio.h>
 int v=50;

void change(){
 v=100;
printf("changed value:%d\n",v);
};
int main(){
printf("initial value:%d\n",v);
change();
return 0;
}
