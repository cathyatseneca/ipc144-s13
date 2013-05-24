#include <stdio.h>

int main(void){

  int choice;
  printf("1) Toopy\n");
  printf("2) Binoo\n");
  printf("3) Donald\n");
  printf("4) Daffy\n");
  printf("Please choose either 1, 2, 3 or 4: ");
  scanf("%d",&choice);
  switch(choice){
    case 1: 
      printf("Toopy is a mouse!\n");
      break;
    case 3:
    case 4:
      printf("duck!\n");
      break;
    case 2:
      printf("Binoo is a cat!\n");
      break;
    default:
      printf("invalid entry\n");
  }
  
  printf("done\n");
  return 0;
}
