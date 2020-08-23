#include "H4Actions.hpp"

//************************//
// H4Actions constructor  //
//------------------------//
//                        //
//       Do nothing       //
//                        //
//************************//
H4Actions::H4Actions () : G4VUserActionInitialization() {}

//************************//
//  H4Actions destructor  //
//------------------------//
//                        //
//       Do nothing       //
//                        //
//************************//
H4Actions::~H4Actions () {}

//*******************//
// Build the primary //
// generator actions //
//*******************//
void H4Actions::Build () const {
  SetUserAction(new H4PrimaryGenerator);
}

//
// H4Actions.cpp end here
//
