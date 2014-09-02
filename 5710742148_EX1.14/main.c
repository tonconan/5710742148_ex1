/* ex03_29.c
   What does this program print? */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int count = 1; /* initialize count */

   while ( count <= 10 ) { /* loop 10 times */

      /* output line of text */
      printf( "%s\n", count % 2 ? "****" : "++++++++" );
      count++; /* increment count */
   } /* end while */

   return 0; /* indicate program ended successfully */

} /* end function main */

/*
=================Answer===================
a. int count = 1;
b. ****
   ++++++++
   ****
   ++++++++
   ****
   ++++++++
   ****
   ++++++++
   ****
   ++++++++
c. at line 10 the program check condition count<or=10 then
   go to next line print output and add count value then loop
   back to line 10 at start of loop check condition repeat loop
   and by the 10th round end count value add up to 11 then back
   to line 10 check the condition now count is > 10 so loop end
   go to line 17 return 0 and end program.
   */



/**************************************************************************
 * (C) Copyright 1992-2007 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

