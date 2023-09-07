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
// source: google/cloud/dataproc/v1/autoscaling_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_AUTOSCALING_POLICY_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_AUTOSCALING_POLICY_METADATA_DECORATOR_H

#include "google/cloud/dataproc/v1/internal/autoscaling_policy_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoscalingPolicyServiceMetadata : public AutoscalingPolicyServiceStub {
 public:
  ~AutoscalingPolicyServiceMetadata() override = default;
  AutoscalingPolicyServiceMetadata(
      std::shared_ptr<AutoscalingPolicyServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  CreateAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
          request) override;

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  UpdateAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
          request) override;

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy> GetAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::ListAutoscalingPoliciesResponse>
  ListAutoscalingPolicies(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest const&
          request) override;

  Status DeleteAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
          request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<AutoscalingPolicyServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_AUTOSCALING_POLICY_METADATA_DECORATOR_H
