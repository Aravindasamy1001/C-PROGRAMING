#include<stdio.h>
typedef struct{
int books;
int chapter;
float pages;
}novel;

void display(novel*z);

int main(){
novel z={65,33,444.00};
display(&z);

return 0;
}
void display(novel*z){
z->books=68;
z->chapter=55;
z->pages=666.00;
printf("books=%d\n",z->books);
printf("chapter=%d\n",z->chapter);
printf("pages=%f\n",z->pages);
}
