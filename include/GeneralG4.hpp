#ifndef GENERALG4_HG4
#define GENERALG4_HG4

// Globals
#include "globals.hh"

// Particles Definition Class
#include "G4ParticleDefinition.hh"

// Particle to be used in the simulation
#include "G4Electron.hh"
#include "G4Positron.hh"
#include "G4Gamma.hh"
#include "G4Proton.hh"
#include "G4MuonMinus.hh"
#include "G4MuonPlus.hh"

// Table with all the particles
#include "G4ParticleTable.hh"

// Physical process
//---Process Manager---//
#include "G4ProcessManager.hh"

// System Of Units
#include "G4SystemOfUnits.hh"

// Volumes
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4LogicalVolumeStore.hh"

// Geometry
#include "G4Box.hh"

// Elements and materials for the volumes
#include "G4NistManager.hh"
#include "G4Material.hh"
#include "G4Element.hh"

// Events
#include "G4Event.hh"
#include "G4ParticleGun.hh"

#endif // GENERALG4_HG4
