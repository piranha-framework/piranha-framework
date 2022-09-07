#pragma once
#include <iostream>
#include <filesystem>
#include <unistd.h>


#define CONTROLLER_PATH "controller/"
#define MODEL_PATH "model/"
#define TEMPLATES_PATH "templates/"
#define STATIC_FILES "static/"
#define ROUTE "route/"
#define ROUTE_URL "127.0.0.1"

static int port = 4445;

namespace fs = std::filesystem;

#define root_path fs::current_path()

static std::string root_path_str = root_path;
