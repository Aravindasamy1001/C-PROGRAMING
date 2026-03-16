#include<stdio.h>
#include"student.h"

int main(){

int a;
int b;
ss st[4];
while(1){
printf("student details menu:\n");
printf("1.add student\n2.seacrh student\n3.display student:\n");
scanf("%d",&a);

if(a==1){
add();
}
if(a==2){
int f;
printf("enter a student id:\n");
scanf("%d",&f);
search(f); 
}
if(a==3){
int d;
printf("number of student want to display:\n");
scanf("%d",&d);
 display(d);
}
}
return 0;

}
