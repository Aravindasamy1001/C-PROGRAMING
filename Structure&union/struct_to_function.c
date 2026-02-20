#include<stdio.h>
typedef struct{
int books;
int chapter;
float page;
}novel;

//fuction dec
void display(novel v);

int main()
{
novel v={05,14,259.00};
display(v);//fun call

return 0;
}
//fun definition

void display(novel v){
printf("books=%d\n",v.books);
printf("chapter=%d\n",v.chapter);
printf("page=%f\n",v.page);
}
