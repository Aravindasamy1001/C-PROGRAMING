#include<stdio.h>

void replace(char *as){

printf("enter your's inpiring words\n");
getchar();
fgets(as,50,stdin);

}

int main(){

char as[50]="let your consistency be your super power:\n";
printf("\n");
printf("%s\n",as);

replace(as);

printf("after replaced your words:\n");
printf("\n");
printf("%s\n",as);

return 0;
}
