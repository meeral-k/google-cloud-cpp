// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/metastore/v1/metastore_federation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_FEDERATION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_FEDERATION_METADATA_DECORATOR_H

#include "google/cloud/metastore/v1/internal/dataproc_metastore_federation_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataprocMetastoreFederationMetadata
    : public DataprocMetastoreFederationStub {
 public:
  ~DataprocMetastoreFederationMetadata() override = default;
  DataprocMetastoreFederationMetadata(
      std::shared_ptr<DataprocMetastoreFederationStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::metastore::v1::ListFederationsResponse>
  ListFederations(grpc::ClientContext& context,
                  google::cloud::metastore::v1::ListFederationsRequest const&
                      request) override;

  StatusOr<google::cloud::metastore::v1::Federation> GetFederation(
      grpc::ClientContext& context,
      google::cloud::metastore::v1::GetFederationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFederation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::metastore::v1::CreateFederationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFederation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::metastore::v1::UpdateFederationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFederation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::metastore::v1::DeleteFederationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<DataprocMetastoreFederationStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_FEDERATION_METADATA_DECORATOR_H
