#ifndef GENERALG4_HG4
#define GENERALG4_HG4

// Globals
#include "globals.hh"

// System Of Units
#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"

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

// Particles Definition Class
#include "G4ParticleDefinition.hh"

// Use QGSP_BERT physiscs
#include "QGSP_BERT.hh"

// Magnetic field
#include "G4MagneticField.hh"
#include "G4FieldManager.hh"
#include "G4UniformMagField.hh"
#include "G4TransportationManager.hh"

// Table with all the particles
#include "G4ParticleTable.hh"

// Physical process maganer
#include "G4ProcessManager.hh"

// Events
#include "G4Event.hh"
#include "G4GeneralParticleSource.hh"

#endif // GENERALG4_HG4
