# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/unroot/Desktop/piranha-framework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/unroot/Desktop/piranha-framework/build

# Include any dependencies generated for this target.
include server-container/CMakeFiles/server-container.dir/depend.make

# Include the progress variables for this target.
include server-container/CMakeFiles/server-container.dir/progress.make

# Include the compile flags for this target's objects.
include server-container/CMakeFiles/server-container.dir/flags.make

server-container/CMakeFiles/server-container.dir/func.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/func.cpp.o: ../server-container/func.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object server-container/CMakeFiles/server-container.dir/func.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/func.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/func.cpp

server-container/CMakeFiles/server-container.dir/func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/func.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/func.cpp > CMakeFiles/server-container.dir/func.cpp.i

server-container/CMakeFiles/server-container.dir/func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/func.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/func.cpp -o CMakeFiles/server-container.dir/func.cpp.s

server-container/CMakeFiles/server-container.dir/http_url_extractor.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/http_url_extractor.cpp.o: ../server-container/http_url_extractor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object server-container/CMakeFiles/server-container.dir/http_url_extractor.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/http_url_extractor.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/http_url_extractor.cpp

server-container/CMakeFiles/server-container.dir/http_url_extractor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/http_url_extractor.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/http_url_extractor.cpp > CMakeFiles/server-container.dir/http_url_extractor.cpp.i

server-container/CMakeFiles/server-container.dir/http_url_extractor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/http_url_extractor.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/http_url_extractor.cpp -o CMakeFiles/server-container.dir/http_url_extractor.cpp.s

server-container/CMakeFiles/server-container.dir/http.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/http.cpp.o: ../server-container/http.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object server-container/CMakeFiles/server-container.dir/http.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/http.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/http.cpp

server-container/CMakeFiles/server-container.dir/http.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/http.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/http.cpp > CMakeFiles/server-container.dir/http.cpp.i

server-container/CMakeFiles/server-container.dir/http.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/http.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/http.cpp -o CMakeFiles/server-container.dir/http.cpp.s

server-container/CMakeFiles/server-container.dir/listener.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/listener.cpp.o: ../server-container/listener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object server-container/CMakeFiles/server-container.dir/listener.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/listener.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/listener.cpp

server-container/CMakeFiles/server-container.dir/listener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/listener.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/listener.cpp > CMakeFiles/server-container.dir/listener.cpp.i

server-container/CMakeFiles/server-container.dir/listener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/listener.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/listener.cpp -o CMakeFiles/server-container.dir/listener.cpp.s

server-container/CMakeFiles/server-container.dir/logger.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/logger.cpp.o: ../server-container/logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object server-container/CMakeFiles/server-container.dir/logger.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/logger.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/logger.cpp

server-container/CMakeFiles/server-container.dir/logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/logger.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/logger.cpp > CMakeFiles/server-container.dir/logger.cpp.i

server-container/CMakeFiles/server-container.dir/logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/logger.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/logger.cpp -o CMakeFiles/server-container.dir/logger.cpp.s

server-container/CMakeFiles/server-container.dir/router.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/router.cpp.o: ../server-container/router.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object server-container/CMakeFiles/server-container.dir/router.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/router.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/router.cpp

server-container/CMakeFiles/server-container.dir/router.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/router.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/router.cpp > CMakeFiles/server-container.dir/router.cpp.i

server-container/CMakeFiles/server-container.dir/router.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/router.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/router.cpp -o CMakeFiles/server-container.dir/router.cpp.s

server-container/CMakeFiles/server-container.dir/tcp.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/tcp.cpp.o: ../server-container/tcp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object server-container/CMakeFiles/server-container.dir/tcp.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/tcp.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/tcp.cpp

server-container/CMakeFiles/server-container.dir/tcp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/tcp.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/tcp.cpp > CMakeFiles/server-container.dir/tcp.cpp.i

server-container/CMakeFiles/server-container.dir/tcp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/tcp.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/tcp.cpp -o CMakeFiles/server-container.dir/tcp.cpp.s

server-container/CMakeFiles/server-container.dir/template_parser.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/template_parser.cpp.o: ../server-container/template_parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object server-container/CMakeFiles/server-container.dir/template_parser.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/template_parser.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/template_parser.cpp

server-container/CMakeFiles/server-container.dir/template_parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/template_parser.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/template_parser.cpp > CMakeFiles/server-container.dir/template_parser.cpp.i

server-container/CMakeFiles/server-container.dir/template_parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/template_parser.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/template_parser.cpp -o CMakeFiles/server-container.dir/template_parser.cpp.s

server-container/CMakeFiles/server-container.dir/template.cpp.o: server-container/CMakeFiles/server-container.dir/flags.make
server-container/CMakeFiles/server-container.dir/template.cpp.o: ../server-container/template.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object server-container/CMakeFiles/server-container.dir/template.cpp.o"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server-container.dir/template.cpp.o -c /home/unroot/Desktop/piranha-framework/server-container/template.cpp

server-container/CMakeFiles/server-container.dir/template.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server-container.dir/template.cpp.i"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unroot/Desktop/piranha-framework/server-container/template.cpp > CMakeFiles/server-container.dir/template.cpp.i

server-container/CMakeFiles/server-container.dir/template.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server-container.dir/template.cpp.s"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unroot/Desktop/piranha-framework/server-container/template.cpp -o CMakeFiles/server-container.dir/template.cpp.s

# Object files for target server-container
server__container_OBJECTS = \
"CMakeFiles/server-container.dir/func.cpp.o" \
"CMakeFiles/server-container.dir/http_url_extractor.cpp.o" \
"CMakeFiles/server-container.dir/http.cpp.o" \
"CMakeFiles/server-container.dir/listener.cpp.o" \
"CMakeFiles/server-container.dir/logger.cpp.o" \
"CMakeFiles/server-container.dir/router.cpp.o" \
"CMakeFiles/server-container.dir/tcp.cpp.o" \
"CMakeFiles/server-container.dir/template_parser.cpp.o" \
"CMakeFiles/server-container.dir/template.cpp.o"

# External object files for target server-container
server__container_EXTERNAL_OBJECTS =

server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/func.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/http_url_extractor.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/http.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/listener.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/logger.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/router.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/tcp.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/template_parser.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/template.cpp.o
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/build.make
server-container/libserver-container.a: server-container/CMakeFiles/server-container.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/unroot/Desktop/piranha-framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libserver-container.a"
	cd /home/unroot/Desktop/piranha-framework/build/server-container && $(CMAKE_COMMAND) -P CMakeFiles/server-container.dir/cmake_clean_target.cmake
	cd /home/unroot/Desktop/piranha-framework/build/server-container && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server-container.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
server-container/CMakeFiles/server-container.dir/build: server-container/libserver-container.a

.PHONY : server-container/CMakeFiles/server-container.dir/build

server-container/CMakeFiles/server-container.dir/clean:
	cd /home/unroot/Desktop/piranha-framework/build/server-container && $(CMAKE_COMMAND) -P CMakeFiles/server-container.dir/cmake_clean.cmake
.PHONY : server-container/CMakeFiles/server-container.dir/clean

server-container/CMakeFiles/server-container.dir/depend:
	cd /home/unroot/Desktop/piranha-framework/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/unroot/Desktop/piranha-framework /home/unroot/Desktop/piranha-framework/server-container /home/unroot/Desktop/piranha-framework/build /home/unroot/Desktop/piranha-framework/build/server-container /home/unroot/Desktop/piranha-framework/build/server-container/CMakeFiles/server-container.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : server-container/CMakeFiles/server-container.dir/depend
