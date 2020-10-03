#ifndef H4DETECTOR_HG4
#define H4DETECTOR_HG4

#include "GeneralG4.hpp"
#include "G4VUserDetectorConstruction.hh"

class H4Detector : public G4VUserDetectorConstruction {
public:
  H4Detector ();
  virtual ~H4Detector ();

  virtual G4VPhysicalVolume *Construct();
};

#endif // H4DETECTOR_HG4
