#ifndef GRPC_SERVICE_H
#define GRPC_SERVICE_H

#include "./protos/account/account.grpc.pb.h"
#include "account.model.h"
#include "database.config.h"

#include <grpcpp/grpcpp.h>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

void startGrpcService(DatabaseConfig& dbConfig);

#endif