#ifndef EVENT_HH
#define EVENT_HH

#include "G4UserEventAction.hh"
#include "G4Event.hh"
#include "g4root.hh"
#include "run.hh"

class MyEventAction : public G4UserEventAction
{
    public:
        MyEventAction(MyRunAction*);
        ~MyEventAction();
    
        virtual void BeginOfEventAction(const G4Event*);
        virtual void EndOfEventAction(const G4Event*);

        void AddEdepGe(G4double edep) {EdepGe += edep;}
        void AddEdepSi(G4double edep) {EdepSi += edep;}
    
    private:
        G4double EdepGe;
        G4double EdepSi;
    
};
#endif