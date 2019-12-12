
#include "pacientes.h"
#include "tratamiento.h"
#include <list>

using namespace std;


void Paciente::MenuT(Paciente &P,string f1,string f2,int encontrado)
{
    Tratamiento T(P," "," ",0," ");
    T.leeTratamientos(f2, P);
    string cad;
    int op;
    do
    {
      system("clear");
      cout<<"0. Exit"<<endl;
      cout<<"1. Añadir tratamiento a un paciente"<<endl;
      cout<<"2. Mostrar tratamiento de un paciente"<<endl;
      cout<<"3. Modificar los datos del tratamiento actual de un paciente"<<endl;
      cout<<"4. Cancelar un tratamiento"<<endl;
      cout<<"Elige opcion ";
      cin>>op;

      if(op==1)
      {
        cout<<"Nombre paciente a buscar: ";
        cin >> cad;
        encontrado = T.getPaciente().BuscarPaciente(cad);
        if(encontrado==true) 
        {
          cout<<"Añadiendo tratamiento al paciente"<<endl;
          T.addTratamiento(cad, f1, f2, P);
          T.leeTratamientos(f2, P);
        }
        else cout<<"Paciente no encontrado"<<endl;
      }

      if(op==2)
      {
        cout<<"Nombre paciente a buscar: ";
        cin >> cad;
        T.mostrarTratamiento(cad, T); 
        T.leeTratamientos(f2, P); 
      }
      if(op==3)
      {
        cout<<"Nombre paciente a buscar: ";
        cin >> cad;
        T.ModificarTratamiento(cad,f2,T);
        T.Lista_Fichero(f2);
        T.leeTratamientos(f2, P); 
      }

      if(op==4)
      {
        cout<<"Nombre del paciente a buscar: ";
        cin >> cad;
        if(T.eliminarTratamiento(cad) == 1)
        {
          cout<<" Tratamiento cancelado"<<endl;
          T.Lista_Fichero(f2);
        } 

        T.leeTratamientos(f2, P); 
      }

    cout<<"Pulsa enter para continuar"<<endl;
    cin.get();
    cin.get();
    } while(op!=0);
    
}

Paciente::Paciente(string n, string a, string d, string fn, string ht, string t, string hm) 
{ 
      nombre = n;
      apellidos = a;
      direccion = d;
      nacimiento = fn;
      hospital = ht;
      telefono = t;
      historial = hm;
}


void Paciente::Menu(Paciente& P, string f1, int encontrado)
{
    
    int op;
    string nombre;
    do
      {
        system("clear");
        cout<<"0. Exit"<<endl;
        cout<<"1. Buscar Paciente"<<endl;
        cout<<"2. Mostrar informacion de un paciente"<<endl;
        cout<<"3. Añadir nuevo paciente"<<endl;
        cout<<"4. Modificar datos paciente"<<endl;
        cout<<"5. Mostrar lista pacientes"<<endl;
        cout<<"6. Eliminar paciente"<<endl;
        cout<<"Introduce una opcion: ";
        cin>>op;

        if(op == 1) 
        {
          cout<<" Nombre paciente= "<<endl;
          cin>> nombre;
          P.SetNombre(nombre);
          encontrado = P.BuscarPaciente(P.GetNombre());
          if(encontrado == true) cout<<" Paciente "<<P.GetNombre()<<" encontrado"<<endl;
          else cout<<" Paciente "<<P.GetNombre()<<" no encontrado"<<endl;
        }

        if(op == 2)
          {
              cout<<" Nombre paciente= "<<endl;
              cin>> nombre;
              P.SetNombre(nombre);
              encontrado = P.BuscarPaciente(P.GetNombre());
              if(encontrado == true)
                {
                    P.MostrarPaciente(P);
                } 
              else cout<<" Paciente "<<P.GetNombre()<<" no encontrado"<<endl;
          }

        if(op == 3)
          {

              cout<<"Nombre paciente= "<<endl;
              cin>> nombre;
              P.SetNombre(nombre);
              encontrado = P.BuscarPaciente(P.GetNombre());
              if(encontrado == true) cout<<"Paciente "<<P.GetNombre()<<" encontrado"<<endl;
              else
                {
                    cin>>P;
                    P.MostrarPaciente(P);
                    P.AddPaciente(P,f1);
                    cout<<"Actualizando lista"<<endl;
                    P.leePacientes(f1);
                }
          }

        if(op == 4)
          {
              cout<<" Nombre paciente= "<<endl;
              cin>> nombre;
              P.SetNombre(nombre);
              encontrado = P.BuscarPaciente(P.GetNombre());
              if(encontrado==false) cout<<" Paciente "<<P.GetNombre()<<" no encontrado"<<endl;
              else
                {
                    P.ModificarLista(f1,P);
                    P.ModificarFichero(f1);
                    P.leePacientes(f1);
                }
          }

        if(op==5) P.MostrarPacientes();

        if(op==6)
          {
              cout<<" Nombre paciente= "<<endl;
              cin>> nombre;
              P.SetNombre(nombre);
              encontrado = P.BuscarPaciente(P.GetNombre());
              if(encontrado == true)
                {
                    if(P.EliminarPaciente(P.GetNombre())==1)
                    {
                      cout<<" Paciente eliminado"<<endl;
                      P.ModificarFichero(f1);
                      P.leePacientes(f1);
                    }
                } 
              else cout<<" Paciente "<<P.GetNombre()<<" no encontrado"<<endl;
          }

        cout<<"Pulsa enter para salir"<<endl;
        cin.get();
        cin.get();

      }while(op != 0);
}

void Paciente::MostrarPaciente(Paciente& reg) 
{

    list <Paciente>:: iterator i;
    if(Pacientes_.empty()==true) cout<<" Lista vacia"<<endl;
    else
        {
            for(i=Pacientes_.begin(); i!= Pacientes_.end(); i++)
              {
                  
                  if(i->GetNombre() == reg.GetNombre())
                    {
                        cout << " Nombre: " << i->GetNombre() << endl;
                        cout << " Apellidos: " << i->GetApellidos() << endl;
                        cout << " Direccion: " << i->GetDireccion() << endl;
                        cout << " Fecha_Nacimiento: " << i->GetNacimiento() << endl;
                        cout << " Hospital de procedencia: " << i->GetHospital() << endl;
                        cout << " Numero de telefono: " << i->GetTelefono() << endl;
                        cout << " Historial del paciente: " << i->GetHistorial() << endl;
                    }
              }
        }
}

istream& operator>>(istream &is, Paciente& reg)
{
      cout<<" Introduciendo datos del paciente"<<endl;
      string cad;
      if(reg.GetNombre() == " ")
        {
            cout<<" Introduce nombre (sin espacios): ";
            is>>cad;
            reg.SetNombre(cad);
        }
      cout<<" Introduce apellidos (apellido1_apellido2): ";
      is>>cad;
      reg.SetApellidos(cad);
      cout<<" Introduce direccion (sin espacios): ";
      is>>cad;
      reg.SetDireccion(cad);
      cout<<" Introduce fecha de nacimiento: ";
      is>>cad;
      reg.SetNacimiento(cad);
      cout<<" Introduce hospital de procedencia (privado/publico): ";
      is>>cad;
      reg.SetHospital(cad);
      cout<<" Introduce numero de telefono: ";
      is>>cad;
      reg.SetTelefono(cad);
      cout<<" Introduce historial medico (h1+h2...): ";
      is>>cad;
      reg.SetHistorial(cad);
      return is;
}

bool Paciente::BuscarPaciente(string cad)
{
      bool encontrado = false;
      list <Paciente>:: iterator i;
      if(Pacientes_.empty()==true) cout<<" Lista vacia"<<endl;
      for(i=Pacientes_.begin(); i!= Pacientes_.end(); i++)
        {
            if(i->GetNombre() == cad){
            encontrado = true;
            }
        }
      return encontrado;  
}

void Paciente::AddPaciente(Paciente& reg, string f1)
{
  
    fstream file(f1, ios::app);
    if(!file) cout<<"Error acceso fichero"<<endl;
    else
      {
          // Añadimos el paciente al fichero de texto
          file<<reg.GetNombre()+",";
          file<<reg.GetApellidos()+",";
          file<<reg.GetDireccion()+",";
          file<<reg.GetNacimiento()+",";
          file<<reg.GetHospital()+",";
          file<<reg.GetTelefono()<<+",";
          file<<reg.GetHistorial()<<endl;
          // Cerramos el fichero
          file.close(); 
      }
}

void Paciente::leePacientes(string f1)
{
  
    list <Paciente>::iterator i;
    ifstream file(f1);
    string cadaux;
    Paciente aux("nombre","apellidos", "direccion", "nacimiento","hospital","telefono","historial");
    Pacientes_.clear();
    while(getline(file,cadaux,',') && !file.eof())
      {
        aux.SetNombre(cadaux);
        getline(file, cadaux, ',');
        aux.SetApellidos(cadaux);
        getline(file, cadaux, ',');
        aux.SetDireccion(cadaux);
        getline(file, cadaux, ',');
        aux.SetNacimiento(cadaux);
        getline(file, cadaux, ',');
        aux.SetHospital(cadaux);
        getline(file, cadaux, ',');
        aux.SetTelefono(cadaux);
        getline(file, cadaux, '\n');
        aux.SetHistorial(cadaux);
        Pacientes_.push_back(aux);
      }
    file.close();  
}

void Paciente::ModificarLista(string f1,Paciente P)
{
      list <Paciente>:: iterator i;
      string aux, nh;
      int val;
      for(i=Pacientes_.begin(); i!=Pacientes_.end(); i++)
        {
          if(i->GetNombre() == P.GetNombre() )
          {
            cout<<" Datos del paciente a modificar: "<<P.GetNombre()<<endl;
            do
              {
                val = P.Menu2();
                if(val==1)
                  {
                    cout<<" Nuevo nombre= ";
                    cin>>aux;
                    i->SetNombre(aux);
                  }
                if(val==2)
                  {
                      cout<<" Apellidos = ";
                      cin>>aux;
                     i->SetApellidos(aux);
                  }
                if(val==3)
                  {
                      cout<<" Direccion: ";
                      cin>>aux;
                      i->SetDireccion(aux);
                  }
                if(val==4)
                  {
                      cout<<" Nacimiento: ";
                      cin>>aux;
                      i->SetNacimiento(aux);
                  }
                if(val==5)
                  {
                      cout<<" Hospital (privado/publico): ";
                      cin>>aux;
                      i->SetHospital(aux);
                  }
                if(val==6)
                  {
                      cout<<" Numero de telefono: ";
                      cin>>aux;
                      i->SetTelefono(aux);
                  }
                if(val==7)
                  {
                      cout<<" Historial medico actual: "<<i->GetHistorial()<<endl;
                      cout<<" ¿Desea corregir dicho historial: y/n?"<<endl;
                      cin>>aux;
                      if(aux == "y")
                        {
                            cout<<" Introduce correccion historial: ";
                            cin>>aux;
                            i->SetHistorial(aux);
                        }
                      cout<<" Añade + historial: ";
                      cin>>nh ;
                      i->SetHistorial( i->GetHistorial() + "+" + nh);
                      cout<<" Nuevo historial: "<<i->GetHistorial()<<endl;
                  }

                cout<<"Pulsa enter para salir"<<endl;
                cin.get();

              } while(val != 0);
          }
        }
}

int Paciente::Menu2()
{
  int val;
  system("clear");
  cout<<" 0.Exit"<<endl;
  cout<<" 1.Nombre"<<endl;
  cout<<" 2.Apellidos"<<endl;
  cout<<" 3.Direccion"<<endl;
  cout<<" 4.Nacimiento"<<endl;
  cout<<" 5.Hospital"<<endl;
  cout<<" 6.Telefono"<<endl;
  cout<<" 7.Historial"<<endl;
  cin>>val;
  return val;
}

void Paciente::ModificarFichero(string f1)
{
      list <Paciente>:: iterator i;
      ofstream file(f1);
      if(!file) cout<<" Error abir fichero "<<f1<<endl;
      else
      {
          for(i=Pacientes_.begin(); i!=Pacientes_.end(); i++)
          {
              file<< i->GetNombre()+",";
              file<<i->GetApellidos()+",";
              file<<i->GetDireccion()+",";
              file<<i->GetNacimiento()+",";
              file<<i->GetHospital()+",";
              file<<i->GetTelefono()<<+",";
              file<<i->GetHistorial()<<endl;
          }
          file.close();
      }
}

void Paciente::MostrarPacientes()
{
      list <Paciente>:: iterator i;
      for(i=Pacientes_.begin(); i!=Pacientes_.end(); i++)
      {
          cout<<" \nNombre paciente= "<<i->GetNombre()<<endl;
          cout<<" Apellidos del paciente= "<<i->GetApellidos()<<endl;
          cout<<" Direccion del paciente= "<<i->GetDireccion()<<endl;
          cout<<" Fecha de nacimiento del paciente= "<<i->GetNacimiento()<<endl;
          cout<<" Hospital de procedencia del paciente= "<<i->GetHospital()<<endl;
          cout<<" Numero de telefono del paciente= "<<i->GetTelefono()<<endl;
          cout<<" Historial del paciente= "<<i->GetHistorial()<<endl;
      }
}

int Paciente::EliminarPaciente(string nombre)
  {
      list<Paciente>:: iterator i;
      if(Pacientes_.empty()==true) cout<<" Lista de pacientes vacia"<<endl;
      else
      {
          for(i=Pacientes_.begin();i!=Pacientes_.end();i++)
          {
              if(i->GetNombre()==nombre)
              {
                cout<<" Nombre paciente "<<i->GetNombre()<<endl;
                Pacientes_.erase(i);
                return 1;
              }
          }
      }
  }

int Tratamiento::buscarFichero(string n2, string aux)
{
  int encontrado = 0;
  string aux2;
  ifstream file(n2);
  if(!file) cout<<"Error abrir fichero "<<n2<<" en formato lectura"<<endl;
  else
  {
    while(getline(file,aux2,',') && !file.eof())
    {

      if(aux2 == aux )
      {
        cout<<"Paciente "<<aux<<" encontrado"<<endl;
        encontrado=1;
      }

      getline(file,aux2);
    }
  }
  file.close();
  return encontrado;
}

void Tratamiento::leeTratamientos(string f2, Paciente &P)
{
  
    list <Tratamiento>::iterator i;
    ifstream file(f2);
    string cadaux;
    Tratamiento aux(P,"tratamiento", "inicio", 0,"fin");
    t_.clear();
    while(getline(file,cadaux,',') && !file.eof())
      {
        aux.SetNombreP(cadaux);
        getline(file, cadaux, ',');
        aux.SetTratamiento(cadaux);
        getline(file, cadaux, ',');
        aux.SetInicio(cadaux);
        getline(file, cadaux, ',');
        aux.SetDosis( atoi(cadaux.c_str()) );
        getline(file, cadaux, '\n');
        aux.SetFin(cadaux);
        t_.push_back(aux);
      }
    file.close();  
}

void Tratamiento::MostrarTratamientos()
{
      list <Tratamiento>:: iterator i;
      for(i=t_.begin(); i!=t_.end(); i++)
      {
          cout<<" \nNombre paciente= "<<i->GetNombreP()<<endl;
          cout<<" Tratamiento del paciente= "<<i->GetTratamiento()<<endl;
          cout<<" Fecha inicio del tratamiento= "<<i->GetInicio()<<endl;
          cout<<" Dosis del tratamiento en mg= "<<i->GetDosis()<<endl;
          cout<<" Fecha finalizacion del tratamiento= "<<i->GetFin()<<endl;
      }
}

void Tratamiento::addTratamiento(string nombre, string n1, string n2, Paciente& P)
{
  list <Paciente>:: iterator i;
  string aux, cad;
  int encontrado, dosis;
  ifstream file(n1);
  fstream file2(n2,ios::app);
  if(!file or !file2) cout<<"Error acceso fichero"<<endl;
  else{
      while(getline(file,aux,',') && !file.eof())
      { 
      if(aux == nombre)
      {
        encontrado = buscarFichero(n2, aux);
        if(encontrado == 0)
        {
          file2<<aux + ",";
          cout<<"Nombre del tratamiento: ";
          cin>>cad;
          file2<<cad+",";
          cout<<"Fecha de inicio del tratamiento: ";
          cin>>cad;
          file2<<cad+",";
          cout<<"Dosis del tratamiento en mg: ";
          cin>>dosis;
          file2<<dosis;
          file2<<",";
          cout<<"Fecha de finalizacion del tratamiento: ";
          cin>>cad;
          file2<<cad<<endl;
        }
      } 
          getline(file,aux);
      } 
      file.close();
      file2.close();
   }
}

void Tratamiento::mostrarTratamiento(string cad, Tratamiento &T)
{
  list <Tratamiento>:: iterator i;
  for(i=t_.begin(); i!=t_.end(); i++)
  {
    if(i->GetNombreP()==cad)
    {
      cout<<" Nombre paciente: "<<i->GetNombreP()<<endl;
      cout<<" Tratamiento del paciente: "<<i->GetTratamiento()<<endl;
      cout<<" Fecha de inicio del paciente: "<<i->GetInicio()<<endl;
      cout<<" Dosis del tratamiento en mg: "<<i->GetDosis()<<endl;
      cout<<" Fecha finalizacion del tratamiento: "<<i->GetFin()<<endl;
    }
  }
}

void Tratamiento::ModificarTratamiento(string nombre, string n2, Tratamiento &T)
{

  list <Tratamiento>:: iterator i;
  string cad, aux;
  int dosis;
  for(i=t_.begin(); i!=t_.end(); i++)
  {
    if(i->GetNombreP() == nombre)
    {
        cout<<"dosis actual: "<<i->GetDosis()<<endl;
        cout<<"¿Desea modificar la dosis del tratamiento: y/n ?"<<endl;
        cin>>aux;
        if(aux == "y")
        {
          cout<<"Nueva dosis del tratamiento: ";
          cin>>dosis;
          i->SetDosis(dosis);
        }
        cout<<"Fin tratamiento: "<<i->GetFin()<<endl;
        cout<<"¿Desea modificar la fecha anterior: y/n ?"<<endl;
        cin>>aux;
        if(aux == "y")
        {
          cout<<" Introduce nueva fecha final del tratamiento: ";
          cin>>cad;
          i->SetFin(cad);
        } 
    }
  }
}

void Tratamiento::Lista_Fichero(string n2)
{
  list <Tratamiento>:: iterator i;
      ofstream file(n2);
      if(!file) cout<<" Error abir fichero "<<n2<<endl;
      else
      {
          for(i=t_.begin(); i!=t_.end(); i++)
          {
            file<<i->GetNombreP()+",";
            file<<i->GetTratamiento()+",";
            file<<i->GetInicio()+",";
            file<<i->GetDosis();
            file<<",";
            file<<i->GetFin()<<endl;
          }
          file.close();
      }
}

int Tratamiento::eliminarTratamiento(string nombre)
{
  list<Tratamiento>:: iterator i;
  if(t_.empty()==true) cout<<" Lista de pacientes vacia"<<endl;
  else
    {
      for(i=t_.begin();i!=t_.end();i++)
        {
          if(i->GetNombreP()==nombre)
              {
                t_.erase(i);
                return 1;
              }
          }
      }
}