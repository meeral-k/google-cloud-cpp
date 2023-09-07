// Copyright 2022 Google LLC
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
// source: google/cloud/bigquery/datapolicies/v1/datapolicy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATAPOLICIES_V1_INTERNAL_DATA_POLICY_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATAPOLICIES_V1_INTERNAL_DATA_POLICY_METADATA_DECORATOR_H

#include "google/cloud/bigquery/datapolicies/v1/internal/data_policy_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_datapolicies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataPolicyServiceMetadata : public DataPolicyServiceStub {
 public:
  ~DataPolicyServiceMetadata() override = default;
  DataPolicyServiceMetadata(
      std::shared_ptr<DataPolicyServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  CreateDataPolicy(
      grpc::ClientContext& context,
      google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  UpdateDataPolicy(
      grpc::ClientContext& context,
      google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  RenameDataPolicy(
      grpc::ClientContext& context,
      google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
          request) override;

  Status DeleteDataPolicy(
      grpc::ClientContext& context,
      google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy> GetDataPolicy(
      grpc::ClientContext& context,
      google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse>
  ListDataPolicies(
      grpc::ClientContext& context,
      google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<DataPolicyServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datapolicies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATAPOLICIES_V1_INTERNAL_DATA_POLICY_METADATA_DECORATOR_H
