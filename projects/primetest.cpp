/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin; 13213
using std::cout;
using std::endl;


int main()
{
 int n;
 cout<<"Enter a number greater than 1 "<<"\n";
cin>>n;
int count=0;                      //divides n by until we can no longer divide n
 int i=1;
 int temp;

     if (n>2)
      {             // 2 is a prime we must create a case for the number "2"
     while ((n%2==0)) {           // dtermines if n is even
       n/=2;                      // n=n/2
      count++;
      cin>>n;                            // lets us know how many times we succesfully divided n
      }
     }else

     {
                                  // if n is 2  "1" is output indicating  2 is prime
      cout<<"1"<<"\n";
      }
      if (count>0) {              // if we get a return value for count we know n is even therefore not prime
       cout<<"0"<<"\n";            // if count>0 then 0 is a output indicating n is not prime
        }else {                   // this is the case when count<0
          while (!(n%temp==0)) {
            temp=((n-(2*i)));                       // m/(m-(2i) represents all the odd numbers that divide m ex 3 5 7 9. since  m is odd and we divide by an odd number and get an i other than 0 the our original number is prime.
             i++;
       }
       if (temp>1) {
        cout <<"0"<<"\n";
         }else
          cout <<"1" <<"\n";
     }
return 0;
   }
