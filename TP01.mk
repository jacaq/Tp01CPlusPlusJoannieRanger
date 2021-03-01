##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=TP01
ConfigurationName      :=Debug
WorkspacePath          :=D:/WorkPlaceCodeLite/WorkPlaceCodeLite
ProjectPath            :=D:/WorkPlaceCodeLite/TP01/TP01
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Joannie
Date                   :=01/03/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=D:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=D:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="TP01.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=D:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/TDM-GCC-64/bin/ar.exe rcu
CXX      := D:/TDM-GCC-64/bin/g++.exe
CC       := D:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/animaux.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/rhinoceros.cpp$(ObjectSuffix) $(IntermediateDirectory)/singe.cpp$(ObjectSuffix) $(IntermediateDirectory)/tigre.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/animaux.cpp$(ObjectSuffix): animaux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/animaux.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/animaux.cpp$(DependSuffix) -MM animaux.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/WorkPlaceCodeLite/TP01/TP01/animaux.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/animaux.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/animaux.cpp$(PreprocessSuffix): animaux.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/animaux.cpp$(PreprocessSuffix) animaux.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/WorkPlaceCodeLite/TP01/TP01/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/rhinoceros.cpp$(ObjectSuffix): rhinoceros.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rhinoceros.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/rhinoceros.cpp$(DependSuffix) -MM rhinoceros.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/WorkPlaceCodeLite/TP01/TP01/rhinoceros.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rhinoceros.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rhinoceros.cpp$(PreprocessSuffix): rhinoceros.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rhinoceros.cpp$(PreprocessSuffix) rhinoceros.cpp

$(IntermediateDirectory)/singe.cpp$(ObjectSuffix): singe.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/singe.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/singe.cpp$(DependSuffix) -MM singe.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/WorkPlaceCodeLite/TP01/TP01/singe.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/singe.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/singe.cpp$(PreprocessSuffix): singe.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/singe.cpp$(PreprocessSuffix) singe.cpp

$(IntermediateDirectory)/tigre.cpp$(ObjectSuffix): tigre.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/tigre.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/tigre.cpp$(DependSuffix) -MM tigre.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/WorkPlaceCodeLite/TP01/TP01/tigre.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/tigre.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/tigre.cpp$(PreprocessSuffix): tigre.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/tigre.cpp$(PreprocessSuffix) tigre.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


