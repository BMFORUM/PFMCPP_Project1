#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: leg
//  action 1: the leg kicks
leg.kick();
//  action 2: the leg bends
leg.bend();
//  action 3: the leg steps forward
leg.stepForward();

//  2)
//  Noun: bus
//  action 1: the bus reverses
bus.reverse();
//  action 2: the bus drives forward
bus.driveForward();
//  action 3: the bus breaks
bus.breaks();

//  3)
//  Noun: cat
//  action 1: the cat purrs
cat.purr();
//  action 2: the cat meows
cat.meow();
//  action 3: the cat jumps
cat.jump();

//  4)
//  Noun: dog 
//  action 1: the dog chases the cat
dog.chaseCat();
//  action 2: the dog barks
dog.bark();
//  action 3: the dog lays down
dog.rest();

//  5)
//  Noun: Washing Machine
//  action 1: the washing machine locks its door
washingMachine.lockDoor();
//  action 2: the washing machine starts a wash cycle
washingMachine.washCycle();
//  action 3: the washing machine starts rinse cycle
washingMachine.rinseCycle();

//  6)
//  Noun: Tree
//  action 1: tree buds new leaf
tree.budNewLeaf();
//  action 2: tree gets taller
tree.increaseHeight();
//  action 3: tree absorbs water
tree.absorbWater();

//  7)
//  Noun: human
//  action 1: the human walks forward
human.walksForward();
//  action 2: the human coughs
human.cough();
//  action 3: the human itches face
human.itchFace();

//  8)
//  Noun: alien
//  action 1: the alien's eyes glow
alien.eyesGlow();
//  action 2: the alien levitates
alien.levitate();
//  action 3: the alien shoots a lazer
alien.shootLazer();

//  9)
//  Noun: plane
//  action 1: the plane takes off the runway
plane.takeOff();
//  action 2: the plane does a loop
plane.loop();
//  action 3: the plane lands
plane.land();

//  10)
//  Noun: shark
//  action 1: the shark swims 
shark.swim();
//  action 2: the shark bites
shark.bite();
//  action 3: the shark gets faster in the water
shark.increaseSpeed();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
