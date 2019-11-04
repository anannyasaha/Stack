#ifndef __Buffer_h__
#define __Buffer_h__

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class Buffer
{
protected:
  char* m;
  int sz;

public:
  Buffer(const char* contents);
  Buffer(int sz);
  ~Buffer();

  const int& size() const;
  const char* mem() const;

  void resize(int sz);
  int read(istream& is);
  int write(ostream& os) const;
  int write(ostream& os, int n) const;

  friend ostream& operator<< (ostream& os, const Buffer& buf);
};

#endif
