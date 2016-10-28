#pragma tick 

/* betterThanAmmortized  
 *
 * SRA test example
 * Created by Abel Garcia
 * 2016
 */
int betterThanAmmortized(int n, int m) {
  if (n <= 0){
    return 1;
  }else if (n > m){
    tick(1);
    int tmp = n - 1;
    int a = betterThanAmmortized(tmp, m);
    return 0;
  }else{
    tick(1);
    tick(1);
    int tmp = n - 1;
    int a = betterThanAmmortized(tmp, m);
    return 0;
  } 
}

void start(){
  int a = betterThanAmmortized(200, 100);
}