/* double release identity problem
 *
 * SRA test example
 * Created by Abel Garcia
 * 2016
 */

#pragma tick 

void doubleRelease(int a, int b) {
  if (a > 0){
    tick(-1);
  }
  if (b > 0 && (a<b || b>a)){
    tick(-1);    
  } 
}

void start(){
   doubleRelease(1,1);
}