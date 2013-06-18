#include<stdio.h>
#include<ctype.h>

char myToLower(char ch){
  char rc=ch;  //rc is the return code (return value)

  
  if(ch >='A' && ch <='Z'){
     rc=ch-'A'+'a';  //ch-'A', if ch is 'A' then this is 0, if ch is 'B
                     //then it is 1 etc.  
                     //ch-'A'+'a' means we add that number to 'a' to get 
                     //the lower case value
  }
  return rc;
}
int main(void){
  char input;  /*variable to store input*/
  char input2;
 
  printf("enter a, b or c: ");
  scanf(" %c",&input);
  
  if(tolower(input) == 'a' || myToLower(input) =='b' || tolower(input) == 'c'){
    printf("correct\n");
  }
  else{
    printf("not correct\n");
  }

}
