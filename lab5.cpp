#include <iostream>
#include <string.h>
using namespace std;
class myvector
{

private:
  int length;
  double *a;
public:
  myvector()
  {

  }
  myvector(int l)
  {
    length=l;
    a=nullptr;
    a=(double*)malloc(sizeof(double)* length);
  }
  myvector (const myvector &obj)
  {
    length=obj.length;
    memcpy(&a,&obj.a,sizeof(a));
  }
  ~myvector()
  {
    free(a);
  }
  bool redim()
  {
    a=(double*)realloc(a,length);
    return true;
  }
  void operator=(myvector &obj)
  {
    length=obj.length;
    double *tem;
    tem=new double;
    tem=obj.a;
    *a=*tem;
  }
  void inner()
  {

  }
  double outter()
  {

  }
};
int main(int argc, char const *argv[]) {
  int l;
  cout<<"enter the length =";
  cin>>l;
myvector obj1(l);
myvector obj2(obj2);
  return 0;
}
