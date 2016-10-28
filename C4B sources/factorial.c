/* factorial
 *
 * SRA test example
 * Created by Abel Garcia
 * 2016
 */
 
#pragma tick 
/* factorial */
int fac(int x) {
  if (x <= 0){
      return 1;
  }else{
    tick(1);
    int t = x-1;
    int y = fac(t);
	tick(-1);
    return x * y;
  } 
}

void start(){
   int a = fac(10);
}