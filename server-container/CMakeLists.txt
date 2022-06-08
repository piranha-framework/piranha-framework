
add_library(server-container func.cpp http_url_extractor.cpp http.cpp listener.cpp logger.cpp router.cpp tcp.cpp template_parser.cpp template.cpp FileChangeWatcher.cpp )

# include_directories(${PROJECT_SOURCE_DIR}/lib/spdlog)

# target_include_directories(${PROJECT_NAME} ${PROJECT_SOURCE_DIR/lib/spdlog})
