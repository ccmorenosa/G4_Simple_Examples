#include "H4Detector.hpp"

//************************//
// H4Detector constructor //
//------------------------//
//                        //
//       Do nothing       //
//                        //
//************************//
H4Detector::H4Detector () : G4VUserDetectorConstruction() {}

//************************//
// H4Detector destructor  //
//------------------------//
//                        //
//       Do nothing       //
//                        //
//************************//
H4Detector::~H4Detector () {}


//************************//
// Construct the detector //
//------------------------//
//                        //
// @return the detector   //
// constructed            //
//                        //
//************************//
G4VPhysicalVolume *H4Detector::Construct () {
  // Manager for NIST db, for material searching
  G4NistManager *nist = G4NistManager::Instance();

  // Set the material of the world as air
  G4Material *world_mat = nist->FindOrBuildMaterial("G4_AIR");

  // Get the definition of silver as a material
  G4Material *silver_mat = nist->FindOrBuildMaterial("G4_Ag");

  // Build world geometry
  G4Box *world_box = new G4Box("World Box", 2*m, 2*m, 2*m);

  // Build a box
  G4Box *box = new G4Box("Box", 10*cm, 10*cm, 10*cm);

  // Build logical volumes
  G4LogicalVolume *world_log = new G4LogicalVolume(
    world_box,
    world_mat,
    "World"
  );
  G4LogicalVolume *box_log = new G4LogicalVolume(
    box,
    silver_mat,
    "Envelope"
  );

  // Place the volumes
  G4VPhysicalVolume *world = new G4PVPlacement(
    0,
    G4ThreeVector(0, 0, 0),
    world_log,
    "Physical World",
    0,
    false,
    0,
    true
  );

  new G4PVPlacement(
    0,
    G4ThreeVector(0, 0, 0),
    box_log,
    "Physical World",
    world_log,
    false,
    0,
    true
  );

  return world;
}

//
// H4Detector.cpp end here
//
