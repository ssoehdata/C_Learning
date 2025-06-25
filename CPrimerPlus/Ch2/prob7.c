/* write a func named one_three() that displays "one"
     on one line,
    call func two() that displays "two" on one line, 
    manin() should display
    "starting now", a func one_three which displays "three" 
    and then the program should display "done"  */

  #include<stdio.h>  
  void two(void);
  void one_three(void);
  void three(void);
  void done(void);  
  int main(void)

  {
    printf("starting now:\n");    
    one_three();
    two();
    three();
    done();

    return 0;
  }

    
   void one_three(void)
   {
        printf("one\n");
   }

   void two(void)
   {
    printf("two\n");
   }
    
   void three(void)
   {
    printf("three\n");
   }
    void done()
    {
        printf("done!");
    }
