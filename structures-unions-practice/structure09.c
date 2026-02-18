#include<stdio.h>

typedef struct {
char city[20];
char state[20];
int pincode;
}address;

typedef struct{
int id;
char name[20];
address addr;
}student;

int main(){
student stu={777,"aravind",{"krishnagiri","tamil nadu",635112}};
//assign the value for struct and nested struct.

printf("student detail:\n");
printf("id:%d\n",stu.id);
printf("name:%s\n",stu.name);
printf("address:\ncity:%s\n",stu.addr.city);
printf("state:%s\n",stu.addr.state);
printf("pincode:%d\n",stu.addr.pincode);

return 0;
}


