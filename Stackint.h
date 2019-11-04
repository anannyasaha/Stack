#ifndef __Stackint_h__
#define __Stackint_h__

#include "stack.h"

class Stackint : public Stack
{
  protected:
  size_t stride; // We need this to number of bytes needed to store an int
  int* m;
  public:
  Stackint();
  void push(int a);
  int pop();

  int read(istream& is);
  int write(ostream& os) const;
//  int write(ostream& os, int n) const;
  friend ostream& operator<< (ostream& os, const Stackint& s);
};

#endif
