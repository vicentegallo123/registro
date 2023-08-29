#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    string nombre;
    int codigo;
    float calificacion;
    bool aprobado;
};

int main()
{
    int n;
    string nombreProfesor;
    string materia;
    int aula;

    cout << "Ingrese el nombre del profesor: " << endl;
    cin >> nombreProfesor;
    cout << "Ingrese la materia que imparte: " << endl;
    cin >> materia;
    cout << "Ingrese el numero de aula: " << endl;
    cin >> aula;
    cout << "Ingrese el numero de alumnos: " << endl;
    cin >> n;

    Alumno alumnos[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el codigo del alumno " << i + 1 << ": "<<endl;
        cin >> alumnos[i].codigo;
        cout << "Ingrese el nombre del alumno " << i + 1 << ": "<<endl;
        cin>>alumnos[i].nombre;
        cout << "Ingrese la calificacion del alumno " << i + 1 << ": "<<endl;
        cin >> alumnos[i].calificacion;
        cout << "El alumno esta aprobado (1 = sí, 0 = no) " << i + 1 << ": "<<endl;
        cin >> alumnos[i].aprobado;
    }

    

    for (int i = 0; i < n; i++)
    {
        if (alumnos[i].aprobado)
        {
     cout <<"Profesor:"<< nombreProfesor  << endl;
    cout << "Materia:" <<materia << endl;
    cout << "Aula :"<< aula << endl; 

            cout << "Alumno:"<<alumnos[i].nombre<< "---"<<+"Codigo:"<<alumnos[i].codigo<<"---"<<+"Calificacion:"<<alumnos[i].calificacion<<"---""Alumno aprobado: Si" << endl;
        }
        else
        {
     cout <<"Profesor:"<< nombreProfesor  << endl;
    cout << "Materia:" <<materia << endl;
    cout << "Aula :"<< aula << endl; 

            cout << "Alumno:"<<alumnos[i].nombre<< "---"<<+"Codigo:"<<alumnos[i].codigo<<"---"<<+"Calificacion:"<<alumnos[i].calificacion<<"---""Alumno aprobado: no" << endl;
               
        }
    }

    return 0;
}
