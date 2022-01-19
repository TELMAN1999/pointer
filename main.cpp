#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class point{
	private:
	 int sum;	
	 int xpoi;
	 int ypoi;
	 double root;
	public:
	 point(int x, int y);
};

class line{
       private:
        int sum;
        int xpoi;
        int ypoi;
	double root;
       public:

 line(int a,int b,int c,int d);

};


point::point(int x, int y){

 	xpoi = x * x;
   	ypoi = y * y;
	sum = xpoi + ypoi;
	root = sqrt(sum);
           cout << "կետի հեռավորւոփյունը կենտրոնից հավասար է" << " " << root  << endl;

}
line::line(int a,int b,int c,int d){
   xpoi =  a - c;
   xpoi = xpoi * xpoi;
   ypoi = b - d;
   ypoi = ypoi * ypoi;
   sum = xpoi + ypoi;
   root = sqrt(sum);
        cout << "երկու կետերի միջև հեռավորությունը հավասար է" << " " << root << endl;

        }
int main(){
   int xa;
   int ya;
   int xb;
   int yb;

   cout <<"ներմուծեք a  կետի x" << endl;
   cin >> xa;
   cout << "ներմուծեք a կետի y "<< endl;
   cin >> ya;
   cout << "ներմուծեք b կետի x " << endl;
   cin >> xb;
   cout << "ներմուծեք b կետի  y"<< endl;
   cin >> yb;
   line (xa,yb,xb,yb);
   point (xa,ya);
   point (xb, yb);
}
