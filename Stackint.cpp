#include "buffer.h"
#include "Stackint.h"
#include <cstring>
Stackint::Stackint():Stack(){
  i=0;
  stride=4;

 m=new int[i];
}
void Stackint::push(int a){

 if (i*stride <= sz)

    {   m[i*stride] = a;}
  else
    {  resize(sz + 5*stride);
      m[i*stride] = a;}
i++;
 }
 int Stackint::pop(){
   //cout<<i<<endl;
   int a= m[i*stride-4];
   m[i*stride-4]=0;
   i--;
   return a;
}
   int Stackint::write(ostream& os) const{
     return Stack::write(os);
   }
   int Stackint::read(istream& is){
   i=Stack::read(is);
    return i;
   }
   ostream& operator<<(ostream& os, const Stackint& s){
     os<<s.i<<"[";
     for(int j=0;j<(s.i);j++){
       if(j<(s.i-1))
       os<<s.m[j*s.stride]<<",";
       else
       os<<s.m[j*s.stride];
     }
     os<<"]";
     return os;
   }
