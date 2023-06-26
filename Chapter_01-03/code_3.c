# include<stdio.h>
int main(){

int PhoneNo;
printf("enter PhoneNo (first four digits): \n");
scanf("%d" , &PhoneNo);
 if(PhoneNo == 8180) {
    printf("Name: SHAIKH ALI ZAID \n");
    printf("age: 18 Years \n");
    printf("Countery: INDIA \n");
    printf("State: MAHARASHTRA \n ");
  } 
  else if(PhoneNo == 7058) {
    printf("Name: ABDALLAH NUJEED \n");
    printf("age: 20 Years \n");
    printf("Countery: EJYPT \n");
    printf("State: CAIRO \n ");
  } 
  else {
    printf("No Data Found..... \n");
  }

// int age;
// printf("Enter age : ");
// scanf("%d", &age);
// if(age < 12) {
// printf("child \n");
// }
// else if(age < 18) {
// printf("teenager \n");
// }
// else {
// printf("adult \n");
// }

return 0;
}