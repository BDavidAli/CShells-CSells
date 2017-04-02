/*Hash Function*/

int  hashFunction(char *s,  int T) {

/* The parameter s represents symbol in question               */
/* the parameter T represents sizeof hashtable.                */
/* The function returns the hash value for the symbol s.       */
/* assume Striong s termineates with newline character         */
/* Assume T >= 2; fucntion reaches lower bound otherwise       */ 
/* hash value equates an integer(n) so 0 =< n =< (T-1)         */
/* The function computes within defined BASE values,           */
/* power function nonwithstanding  within c library fxns       */

   
#define  BASE   127

   int h = 0;     

/* holds final hash value */
   
int temp;      

/* temporary int32                   */
  
/* The hash value is computed in the for loop below. */
   
for (;  *s != 0;  s++) {
      
 temp = (BASE * h + *s);
      
 if (temp < 0) temp = -temp;
    
   h = temp % T;
  
}

 /* hash fxn complete, return value */
   
return h;

} 

/* End of hash function */
