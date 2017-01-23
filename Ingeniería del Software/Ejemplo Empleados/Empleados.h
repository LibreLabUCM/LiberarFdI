
#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <string>

/**
  * class Empleados
  * 
  */

class Empleados
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Empleados ();

  /**
   * Empty Destructor
   */
  virtual ~Empleados ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string nombre;
  string apellidos;
  int edad;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of nombre
   * @param new_var the new value of nombre
   */
  void setNombre (string new_var)   {
      nombre = new_var;
  }

  /**
   * Get the value of nombre
   * @return the value of nombre
   */
  string getNombre ()   {
    return nombre;
  }

  /**
   * Set the value of apellidos
   * @param new_var the new value of apellidos
   */
  void setApellidos (string new_var)   {
      apellidos = new_var;
  }

  /**
   * Get the value of apellidos
   * @return the value of apellidos
   */
  string getApellidos ()   {
    return apellidos;
  }

  /**
   * Set the value of edad
   * @param new_var the new value of edad
   */
  void setEdad (int new_var)   {
      edad = new_var;
  }

  /**
   * Get the value of edad
   * @return the value of edad
   */
  int getEdad ()   {
    return edad;
  }
private:


  void initAttributes () ;

};

#endif // EMPLEADOS_H
