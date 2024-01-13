# include <iostream>
using namespace std;
int main ()
{
   float A,n,Bill,Com,bs,hcom;
   cout<<"Please eneter your account number";
   cin>>A;
    Bill=4.5+(20.5*n)+7.5;
    Com =15+(75*n)+(50*bs);
    hcom=15+(80*n)+(50*bs);
   char c;
   cout<<"Please enter R if you want Residential Bill & C if you want Commercial Bill";
   cin>>c;
   cout<<"Please enter your number of Premium Channels";
   cin>>n;
   if ((c=='R') || (c=='r'))
   {
      Bill=4.5+(20.5*n)+7.5;
   
   cout<<"\nYour bill for "<<A<<" is "<<Bill;
   }
   else if ((c=='C') || (c=='c'))
   {
   cout<<"\nEnter your number of basic servers ";
   cin>>bs;
   if(bs<=10)
   {
      Com =15+(75*n)+(50*bs);

   cout<<"\nYour bill for "<<A<<" is "<<Com;
   }
   if(bs>10)
   {
    hcom=15+(80*n)+(50*bs);
   cout<<"\nYour bill for "<<A<<" is "<<hcom;
   }
   }
   return 0;
}
