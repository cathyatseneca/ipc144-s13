#include <stdio.h>

int main(void){

  int choice;
  printf("1) Toopy\n");
  printf("2) Binoo\n");
  printf("Please choose either 1 or 2: ");
  scanf("%d",&choice);
  if(choice == 1){
    printf("Toopy is a mouse!\n");
  }
  else{
    printf("Binoo is a cat!\n");
  }
  printf("done\n");
  return 0;
}
