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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/internal/org_policy_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orgpolicy/v2/orgpolicy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace orgpolicy_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyMetadata::OrgPolicyMetadata(std::shared_ptr<OrgPolicyStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
OrgPolicyMetadata::ListConstraints(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListConstraints(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse>
OrgPolicyMetadata::ListPolicies(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListPolicies(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyMetadata::GetPolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetPolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyMetadata::GetEffectivePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEffectivePolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyMetadata::CreatePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreatePolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyMetadata::UpdatePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
  SetMetadata(context, "policy.name=" + request.policy().name());
  return child_->UpdatePolicy(context, request);
}

Status OrgPolicyMetadata::DeletePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeletePolicy(context, request);
}

void OrgPolicyMetadata::SetMetadata(grpc::ClientContext& context,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void OrgPolicyMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_internal
}  // namespace cloud
}  // namespace google
