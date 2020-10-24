#ifndef H4ACTIONS_HG4
#define H4ACTIONS_HG4

#include "GeneralG4.hpp"
#include "G4VUserActionInitialization.hh"

#include "H4PrimaryGenerator.hpp"

class H4Actions : public G4VUserActionInitialization {
public:
  H4Actions ();
  virtual ~H4Actions ();

  virtual void Build() const;
};

#endif // H4ACTIONS_HG4
