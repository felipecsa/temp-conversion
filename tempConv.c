#include <stdio.h>
#include <ctype.h>
int main(){
  char unit;
  float temp;

  printf("\nIs the temp in Celsius or Farenheit? ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if(unit=='C'){
    printf("\nEnter the temp in Celsius: ");
    scanf("%f", &temp);
   temp = (temp *9 / 5) + 32;
    printf("The temp in Farenheit is %.2f \n", temp);
    
  }
  
  else if(unit == 'F'){
    printf("Enter the temp in Farenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32)/5) * 9;
    printf("The temp in Celsius is %.2f\n", temp);
    
  }

  return 0;
}

