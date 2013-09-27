
using namespace std;

class Punto
{
    public:

    int x;
    int y;
    Punto(){x =0; y = 0;}
    Punto (int px, int py){ x = pX; y = pY;}

}

class Poligono{

private:

    Punto *p;
    int cantidad;

public:

    //Initializes the polygon with a dynamic array to a polygon with three vertices.
    Poligono(){ P=new Punto[3]; cantidad=3;}
    //Initializes the polygon with a dynamic array to a polygon with cant vertices.
    Poligono(int cantidad){P=new Punto[c]; cantidad=c;}
    //Copy constructor. Initializes the polygon as a copy of the polygon P passed as a parameter.
    Poligono(const Poligono& W)
    {
        cantidad=W.cantidad;
        P=new Punto[cantidad];
        P[0].x=W.P[0].x;
        P[0]=Punto (W.P[0].x)
    }
    //Destructor. Release the dynamic memory requested.
    ~Poligono(){delete []p;}
    //Sobrecarga de = . Place in the polygon a copy of the polygon  P.
    Poligono& operator = (const Poligono& P )
    //Sobrecarga de []. Let handle the array with []
    Punto& operator[] (int casilla)
    //Sobrecarga de << .Display on screen the polygon vertices
    friend ostream& operator << (ostream& os, const Poligono& P)
    {

    }
    //Sobrecarga de >> . Read the polygon vertices
    friend istream& operator >> (istream& is, Poligono& P)
    {

    }
    //Get the perimeter of the polygon
    double perimetro()
    //Get the area of the polygon
    double area()
};

