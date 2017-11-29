
#ifndef PIECE_H
#define PIECE_H

#include <string>

/**
  * class Piece
  * 
  */

class Piece
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Piece ();

  /**
   * Empty Destructor
   */
  virtual ~Piece ();

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

  unsigned int value;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  


  /**
   * Set the value of value
   * @param new_var the new value of value
   */
  void setValue (unsigned int new_var)   {
      value = new_var;
  }

  /**
   * Get the value of value
   * @return the value of value
   */
  unsigned int getValue ()   {
    return value;
  }
protected:



  /**
   * @return bool
   * @param  coordinate
   */
  virtual bool move (Coordinate coordinate)
  {
  }

private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:


  void initAttributes () ;

};

#endif // PIECE_H
