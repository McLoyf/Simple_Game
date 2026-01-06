// How to design your first programs

/* Design step 1: Define your goal
*  A definition of the goal should be able to be put in a sentence or two. It's useful to
*  express this as a user-facing outcome.
*  Example: Allow the user to organize a list of names and associated phone numbers or
*  generate randomized dungeons that will produce interesting looking caverns.
*
*  Design step 2: Define requirements
*  This is defining what the constraints that your solution needs to abide by (e.g budget, timeline
*  , space, memory, etc..) as well as capabilities that the program must exhibit in order to meet
*  user needs. Example: Phone numbers should be saved, so they can be recalled later or the
*  randomized dungeon should always contain a way to get from the entrance to an exit
*
*  Design step 3: Define your tools, targets, and backup plan
*  Defining that target architecture and/or OS your program will run on, determining what set of tools
*  you will be using, determining whether you will write your program alone or as part as a team, defining
*  your testing/feedback/release strategy, determining how you will back up your code.
*
*  Design step 4: Break hard problems down into easy problems
*  Instead of solving a single complex task, we break out the problem into multiple subtasks, each of which
*  are easier to solve. If those subtasks are too difficult, they can be broken down further. If repeatably done
*  you can eventually get to a point where each individual task is managable, if not trival.
*  Example: Let's say we want to clean our house. Out task hierachy currently looks like this-
*  *Clean the house
*  Cleaning the house is pretty big task to do in one sitting, so let's break it into subtasks:
*  *Clean the house
*     -Vacuum the carpets
*     -Clean the bathrooms
*         -Scrub the toilet
*         -Wash the sink
*     -Clean the kitchen
*         -Clear the countertops
*         -Clean the countertops
*         -Scrub the sink
*         -Take out the trash
*
*  Having a task hierarchy is useful because once you have that you've essentially defined the structure of your
*  overall program.
*
*  Design step 5: Figure out the sequence of events
*  If we were writing a calculator, we might do things in this order:
*  -Get first number from user
*  -Get mathematical operation from user
*  -Get second number from user
*  -Calculate result
*  -Print result
*/

/*Implementation step 1: Outlining your main function
* int main()
* {
*   // Get first number from user
*   getUserInput();
*
*   // Get mathematical operation from user
*   getMathenaticalOperation();
*
*  // Get second number from user
*  getUserInput();
*
*  // Calculate result
*  calculateResult();
*
*  // Print result
*  printResult();
*
*  return 0;
* }
*________________________________________________________________________________________________
*  Implementation step 2: Implement each function
*  Here we define the function prototype (inputs and outputs), write the function and test the
*  function. We go through the whole code into we have the full program finished
*_________________________________________________________________________________________________
*  Implementation step 3: Final testing
*  Once the program in working and fully 'finished', the last step is to test the whole program
*  and ensure it works as intended. If it doesn't, fix it (duh)
*_________________________________________________________________________________________________
*  It's best to keep programs simple to start, add features over time, focus on one area at a time
*  test every piece of code as you go, don't invest in perfecting code as you go (it's better to
*  make something that functions before you go in to improve it), optimize for maintainability, not
*  performance
*/