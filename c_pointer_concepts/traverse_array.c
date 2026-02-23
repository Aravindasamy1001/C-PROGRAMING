#include<stdio.h>
int main(){

int as[8]={23,31,678,54,99,681,399,822};
int *p=&as[0];
int i;

printf("enter a number for the traverse (0-7):\n");
scanf("%d",&i);


if (i<8&&i>=0){
printf("traverse of *(p+i):%d\n",*(p+i));
printf("traverse of p[i]:%d\n",p[i]);
printf("traverse of *(i+p):%d\n",*(i+p));
}
else{
printf("invalid index!");
}

//traverse *(p+i)=*(i+p)=p[i]=i[p].

return 0;
}
