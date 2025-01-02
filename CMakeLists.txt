# Minimum CMake version and project name
cmake_minimum_required(VERSION 3.10)
project(StyleSyncServer)

# C++ standard
set(CMAKE_CXX_STANDARD 17)

# Define directories for source files and includes
set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(CONFIGS_DIR ${PROJECT_SOURCE_DIR}/configs)
set(MODELS_DIR ${SOURCE_DIR}/models)
set(SERVICES_DIR ${SOURCE_DIR}/services)

# Add source files
file(GLOB SOURCES
    ${SOURCE_DIR}/main.cpp
    ${CONFIGS_DIR}/database.config.cpp
    ${MODELS_DIR}/accounts/account.model.cpp
    ${MODELS_DIR}/categories/category.model.cpp
    ${MODELS_DIR}/products/product.model.cpp
    ${SERVICES_DIR}/restful/restful.service.cpp
    ${SERVICES_DIR}/gRPC/grpc.service.cpp
    ${SERVICES_DIR}/tcp/tcp.service.cpp
)

# Add executable target
add_executable(StyleSyncServer ${SOURCES})

# Include directories for the project
target_include_directories(StyleSyncServer PRIVATE
    ${CONFIGS_DIR}
    ${MODELS_DIR}/accounts
    ${MODELS_DIR}/categories
    ${MODELS_DIR}/products
    ${SERVICES_DIR}/restful
    ${SERVICES_DIR}/gRPC
    ${SERVICES_DIR}/tcp
    /usr/include/mysql
)

# Set custom prefix path for finding dependencies
set(CMAKE_PREFIX_PATH "/home/dungna31/.local")

# Find and link Protobuf and gRPC
find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

# Include directories for Protobuf and gRPC
target_include_directories(StyleSyncServer PRIVATE
    ${Protobuf_INCLUDE_DIRS}
    ${gRPC_INCLUDE_DIRS}
)

# Link gRPC and Protobuf libraries
target_link_libraries(StyleSyncServer PRIVATE
    ${gRPC_LIBRARIES}
    ${Protobuf_LIBRARIES}
)

# Find and link MySQL Connector/C++ library
find_library(MYSQL_LIB mysqlcppconn PATHS /usr/lib/x86_64-linux-gnu /home/dungna31/.local/lib)
if(MYSQL_LIB)
    target_link_libraries(StyleSyncServer PRIVATE ${MYSQL_LIB})
    message(STATUS "MySQL Connector/C++ library found at: ${MYSQL_LIB}")
else()
    message(FATAL_ERROR "MySQL Connector/C++ library not found")
endif()

# Add debug output for dependencies
message(STATUS "Protobuf include dirs: ${Protobuf_INCLUDE_DIRS}")
message(STATUS "gRPC include dirs: ${gRPC_INCLUDE_DIRS}")
message(STATUS "MySQL library path: ${MYSQL_LIB}")

