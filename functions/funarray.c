# include<stdio.h>

int function(int numbers[4]){
    for(int i = 0; i < 4; i++){
      printf("%d\n", numbers[i]);
    }
  }
  
  int main(){

    int numbers[4] = {10, 20, 30, 40};
    function(numbers);
    
    return 0;
  }
  