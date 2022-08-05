#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int x, int y,int z);
    void getData(){
        cout<<"a is"<<a<<endl;
        cout<<"b is"<<b<<endl;
        cout<<"c is"<<c<<endl;
       
    }
    void print(){
        cout<<"d is "<<d<<endl;
        cout<<"e is "<<e;
    }
};

void employee :: setData(int x, int y, int z){
    a=x;
    b=y;
    c=z;
}
int main(){
    employee me;
    me.setData(1,2,3);
    me.d=4;
    me.e=5;
    me.getData();
    me.print();
    return 0;

}

#include<iostream>
using namespace std;
class sum;
class num{
    int a,b;
    friend class sum;
    public:
    void setcomplex(int x, int y){
     a=x;
     b=y;
    }
};
class sum{
  public:
  void plus(num n1, num n2){
   int sum1 = n1.a + n2.a;
   int sum2 = n1.b + n2.b;
   cout<<sum1<<"+ i"<<sum2;
  }
};
int main(){
    num c1,c2;
    c1.setcomplex(4,6);
    c2.setcomplex(1,2);
    sum r;
    r.plus(c1,c2);
     return 0;

}

#include<iostream>
using namespace std;
class eqc{
    int a,b;
    public:
 
    eqc(void){
        cin>>a;
        cin>>b;
    }
    void print(){
        cout<<a<<" +i "<<b;
    }
};

int main(){
    eqc x;
    x.print();
}

// Ambiguity resolution

#include<iostream>
using namespace std;
class primary{
    public:
    void print(){
        cout<<"print this"<<endl;
    }
};
class secondary{
    public:
    void print(){
        cout<<"not this"<<endl;
    }
};
class derived : public primary, public secondary{
 int a;
 public:
 void print(){
     primary :: print();
 }
};
int main(){
derived d;
d.print();
return 0;
}