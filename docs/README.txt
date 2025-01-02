/style-sync-server
│
├── CMakeLists.txt           # Build system configuration (CMake)
├── /build                   # Build directory
├── /configs                 # Configuration files (e.g., database.config.h, server settings)
├── /src                     # Source files (core logic, server code)
│   ├── /models              # Database models (e.g., account.model.h)
│   ├── /controllers         # Request/Response handling (e.g., controllers for API)
│   ├── /services            # Business logic or services (e.g., authentication, database interactions)
│   ├── /utils               # Utility/helper functions
│   ├── /network             # Networking logic (e.g., socket management)
│   ├── main.cpp             # Entry point of the server
│   └── /middlewares         # Middlewares (e.g., logging, authentication)
├── /include                 # Header files for global utility or interfaces
├── /third_party             # External libraries (e.g., Boost, MySQL Connector)
├── /tests                   # Unit tests and integration tests
├── /logs                    # Log files (if not using stdout or stderr)
└── /docs   


### Generate C++ and gRPC Code from Proto File

To generate C++ code and gRPC service code from a `.proto` file, use the following command:

```bash
protoc --cpp_out=. --grpc_out=. --plugin=protoc-gen-grpc=$(which grpc_cpp_plugin) account.proto
