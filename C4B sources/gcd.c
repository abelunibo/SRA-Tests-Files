/* greatest common divisor
 *
 * SRA test example
 * Created by Abel Garcia
 * 2016
 */
 
#pragma tick

/* gcd by substractions */
void gcd(int x, int y) {
  while (x > 0 && y > 0) {
    if (x > y){
      tick(1);
      x -= y;
    }else{
      tick(1);
      y -= x;
    }
  }
}