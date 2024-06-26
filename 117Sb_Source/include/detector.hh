#ifndef DETECTOR_HH
#define DETECTOR_HH

#include "G4VSensitiveDetector.hh"
#include "G4RunManager.hh"
#include "G4SystemOfUnits.hh"

#include "g4root.hh"

// Declares the user's MySensitiveDetector derived from the public class G4VSensitiveDetector
class MySensitiveDetector:public G4VSensitiveDetector
{
// Sensitive detector constuctor and destructor   //
public:
    MySensitiveDetector(G4String);
    ~MySensitiveDetector();
    
private:
    virtual G4bool ProcessHits(G4Step *, G4TouchableHistory *);
    
};

// Declares the user's SiSensitiveDetector derived from the public class G4VSensitiveDetector
class SiSensitiveDetector:public G4VSensitiveDetector
{
// Si sensitive detector constuctor and destructor   //
public:
    SiSensitiveDetector(G4String);
    ~SiSensitiveDetector();
    
private:
    virtual G4bool ProcessHits(G4Step *, G4TouchableHistory *);
    
};
#endif
