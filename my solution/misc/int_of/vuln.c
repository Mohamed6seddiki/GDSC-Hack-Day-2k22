#include <stdio.h>

int main(){
  unsigned char impossible_num;
  int new_num;
  FILE *flag;
  char Flag[100];


  
  char c;
  char urflag[] = "GDSC{WeLl_That's_a_tRap}";
  printf("Enter a number :");
  scanf("%d",&new_num);
  if (new_num > 0){
  	impossible_num = 38;
  	impossible_num =new_num + impossible_num;
  	printf("%d",impossible_num);
   	if (new_num > 0 &&  impossible_num == 15){
	flag = fopen("flag.txt","r");
        fread(&Flag,64,1,flag);
        printf("%s",Flag);
        fclose(flag);

      	}}
  else{
	printf("try again with a positive num ");
	}

  

return 0;
}