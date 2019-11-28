##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Final-Project-Group6
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH
ProjectPath            :=C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
<<<<<<< HEAD
User                   :=Nikhil Mehra
Date                   :=27/11/19
CodeLitePath           :=/home/nmehra/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
=======
User                   :=jchue
Date                   :=26/11/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Final-Project-Group6.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)src/Maze $(IncludeSwitch)src/Algorithm $(IncludeSwitch)src/LandBasedRobot $(IncludeSwitch)src/LandBasedTracked $(IncludeSwitch)src/LandBasedWheeled $(IncludeSwitch)src/API 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS := -Wmain -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
<<<<<<< HEAD
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) 
=======
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) 
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
<<<<<<< HEAD
$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix): src/Algorithm/algorithm.cpp $(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/nmehra/Desktop/ENPM809Yworkspace/Final_Project/Final-Project-Group6/src/Algorithm/algorithm.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(DependSuffix): src/Algorithm/algorithm.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(DependSuffix) -MM src/Algorithm/algorithm.cpp

$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(PreprocessSuffix): src/Algorithm/algorithm.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(PreprocessSuffix) src/Algorithm/algorithm.cpp

$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix): src/LandBasedTracked/landbasedtracked.cpp $(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/nmehra/Desktop/ENPM809Yworkspace/Final_Project/Final-Project-Group6/src/LandBasedTracked/landbasedtracked.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix): src/LandBasedTracked/landbasedtracked.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix) -MM src/LandBasedTracked/landbasedtracked.cpp
=======
$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix): src/LandBasedWheeled/landbasedwheeled.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix) -MM src/LandBasedWheeled/landbasedwheeled.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6/src/LandBasedWheeled/landbasedwheeled.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(PreprocessSuffix): src/LandBasedWheeled/landbasedwheeled.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(PreprocessSuffix) src/LandBasedWheeled/landbasedwheeled.cpp

$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix): src/API/api.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_API_api.cpp$(DependSuffix) -MM src/API/api.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6/src/API/api.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_API_api.cpp$(PreprocessSuffix): src/API/api.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_API_api.cpp$(PreprocessSuffix) src/API/api.cpp
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d

$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix): src/LandBasedTracked/landbasedtracked.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix) -MM src/LandBasedTracked/landbasedtracked.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6/src/LandBasedTracked/landbasedtracked.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(PreprocessSuffix): src/LandBasedTracked/landbasedtracked.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(PreprocessSuffix) src/LandBasedTracked/landbasedtracked.cpp

<<<<<<< HEAD
$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix): src/API/api.cpp $(IntermediateDirectory)/src_API_api.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/nmehra/Desktop/ENPM809Yworkspace/Final_Project/Final-Project-Group6/src/API/api.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_API_api.cpp$(DependSuffix): src/API/api.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_API_api.cpp$(DependSuffix) -MM src/API/api.cpp

$(IntermediateDirectory)/src_API_api.cpp$(PreprocessSuffix): src/API/api.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_API_api.cpp$(PreprocessSuffix) src/API/api.cpp
=======
$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix): src/Algorithm/algorithm.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(DependSuffix) -MM src/Algorithm/algorithm.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6/src/Algorithm/algorithm.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(PreprocessSuffix): src/Algorithm/algorithm.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(PreprocessSuffix) src/Algorithm/algorithm.cpp
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

<<<<<<< HEAD
$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix): src/Maze/maze.cpp $(IntermediateDirectory)/src_Maze_maze.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/nmehra/Desktop/ENPM809Yworkspace/Final_Project/Final-Project-Group6/src/Maze/maze.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Maze_maze.cpp$(DependSuffix): src/Maze/maze.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Maze_maze.cpp$(DependSuffix) -MM src/Maze/maze.cpp

$(IntermediateDirectory)/src_Maze_maze.cpp$(PreprocessSuffix): src/Maze/maze.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Maze_maze.cpp$(PreprocessSuffix) src/Maze/maze.cpp

$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix): src/LandBasedWheeled/landbasedwheeled.cpp $(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/nmehra/Desktop/ENPM809Yworkspace/Final_Project/Final-Project-Group6/src/LandBasedWheeled/landbasedwheeled.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix): src/LandBasedWheeled/landbasedwheeled.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix) -MM src/LandBasedWheeled/landbasedwheeled.cpp

$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(PreprocessSuffix): src/LandBasedWheeled/landbasedwheeled.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(PreprocessSuffix) src/LandBasedWheeled/landbasedwheeled.cpp

=======
$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix): src/Maze/maze.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Maze_maze.cpp$(DependSuffix) -MM src/Maze/maze.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jchue/Documents/GitHub/809Y_Final_Project_JCH/Final-Project-Group6/src/Maze/maze.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Maze_maze.cpp$(PreprocessSuffix): src/Maze/maze.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Maze_maze.cpp$(PreprocessSuffix) src/Maze/maze.cpp

>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d

-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


