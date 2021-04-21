 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Kingdom of Buritania
 
 > Authors: \<[Zamir Noor](https://github.com/zzamir102)\>


## Project Description
 > * This is going to be a text-based RPG with a fantasy type genre. 
 > * We chose to make a Text-Based Role-Playing Game because it seems very fun and relatable to us. This project idea allows us to be creative such that we are able to tell unique stories and make unique characters through a programming project. 
 > * Languages/tools/technologies
 >   * C++ - Programming Language used for our project
 >   * Valgrind - Used to detect memory leaks
 >   * CMake - to compile various file in our program
 >   * Google Framework - helps create unit tests for code
 > * Input/Output
 >   * Input: Keyboard prompts for choosing character/level
 >   * Output: Console outputs corresponding to specific inputs
 > * Design Patterns
 >   * Factory Pattern
 >     * This pattern is a creational design pattern that consists of a superclass that provides an interface. The corresponding subclasses that inherent from the superclass will allow us to make many unique objects. This is very convenient for our project since we are going to have different types of characters, but they will all share common traits like health points and attack damage. One common problem we might have during implmentation is finding ways to keep characters unique but similar at the same time. This pattern solves this issue by letting various objects have common traits and its own unique traits. This design pattern will make it simple for us to make multiple objects that share common traits. 
 >   * Decorator Pattern
 >     *  The decorator pattern is a structural design pattern that allows new behaviors to be attached to objects.  We picked this pattern because it allows us to make differnt character types in our RPG. This pattern also encourages the creation of more specific classes, more specifically, it allows for subclasses to have its own subclasses. An issue this design pattern can solve the creation of classes within subclasses. For instance, if we implment a new character type, we might also desire different characters within this new character type. This design pattern encourages that type of object creation, making this design pattern a suitable solution to our problems. 


 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
