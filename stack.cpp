#include "buffer.h"
#include "stack.h"
#include <cstring>
Stack::Stack():Buffer(40){
  i=0;
 //m=new char[i];
}
void Stack::push(char a){
    //sz=strlen(m);
 //cout<<sz<<" this is length"<<endl;
 //char* temp=new char[sz+1];
 //strcpy(temp,m);
 if (i <= sz)
    {  m[i] = a;}
  else
    {  resize(sz + 5);
      m[i] = a;}
//delete[] m;
// temp[sz]=a
//temp[len+1]='\0';
 //resize(sz);
 //delete[] temp;
 //m[sz]=a;
//for(int k=0;k<i+1;k++){
//    cout<<m[k]<<" inside m "<<" k"<<k<<endl;

 //}
i++;
  //delete[] temp;
 }

char Stack::pop(){
  //cout<<i<<endl;
  char a= m[i-1];
  m[i-1]=0;
  i--;
  return a;

}
int Stack::write(ostream& os) const{
  return Buffer::write(os, i);
}
int Stack::read(istream& is){
//  while(!is.eof()){
  //  string line;
    //for(int p=0;p<line.length();p++){
      //cout<<line[p]<<endl;
  //  }
  //}
  i=Buffer::read(is);

return  i;

}
//int write(ostream& os) const;

ostream& operator<< (ostream& os, const Stack& s){
  os<<s.i<<"[";
  for(int j=0;j<(s.i);++j){
    os<<s.m[j];
  }
  os<<"]";
  return os;
}
