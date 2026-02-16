#include<stdio.h>

typedef struct{
  char city[25];
  char state[25];
  int  pincode;
}address;

typedef struct{
  char name[25];
  int roll;
  float mark;
  address addr;
}student;

int main(){
student s1={"aravind",22279,86.00,{"krishnagiri","tamil nadu",635112}};

printf("name=%s\n",s1.name);
printf("roll=%d\n",s1.roll);
printf("mark=%.2f\n",s1.mark);
printf("student address:\n");
printf("city=%s\n",s1.addr.city);
printf("state=%s\n",s1.addr.state);
printf("pincode=%d\n",s1.addr.pincode);

return 0;
}

