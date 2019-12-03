ENPM809Y
Final Project - Group6.

The file contains the instructions so that a robot can navigate through a maze using the Breadth-First Search Path Planning Algorithm. We will be using Micromouse Simulator to visualize the maze and to see the robot follow the path.

Steps to install mms:

1. sudo apt-get install qt5-default
2. git clone git@github.com:mackorone/mms.git
3. cd MMS/src
   qmake && make
4. ../../bin/sim

The above steps were mentioned at " https://github.com/mackorone/mms " and the link to it was provided to us in the project description.

Once MMS is installed, select a maze and open the Edit Mouse Algorithm pop-up to put in the commands as follows:


1. Name: Input your Desired Name. 

2. Directory: /home/user_name/Final-Project-Group6
(You can also browse to the Final-Project-Group6 folder using the browse pop up next to the directory space).

3. Build Command: g++ -std=c++11 main.cpp src/Algorithm/algorithm.cpp src/Maze/maze.cpp src/API/api.cpp  src/LandBasedTracked/landbasedtracked.cpp src/LandBasedWheeled/landbasedwheeled.cpp

4. Run Command: ./a.out


*user_name* in the directory above should be your username for Ubuntu.
 
Once you fill in these details, press OK.

Hit Build. Once it shows COMPLETE in the adjoining box, Hit Run. The robot should search for the path and follow it.


You don't have to build the code again to run it for a different maze. Once the build is complete, you can run the code for multiple mazes, by changing the Maze config and hitting Run.


