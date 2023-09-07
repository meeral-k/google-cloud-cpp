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

#include "google/cloud/bigquery/datapolicies/v1/internal/data_policy_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/datapolicies/v1/datapolicy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datapolicies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataPolicyServiceMetadata::DataPolicyServiceMetadata(
    std::shared_ptr<DataPolicyServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceMetadata::CreateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceMetadata::UpdateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("data_policy.name=",
                           internal::UrlEncode(request.data_policy().name())));
  return child_->UpdateDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceMetadata::RenameDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RenameDataPolicy(context, request);
}

Status DataPolicyServiceMetadata::DeleteDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceMetadata::GetDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse>
DataPolicyServiceMetadata::ListDataPolicies(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataPolicies(context, request);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataPolicyServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, request);
}

void DataPolicyServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DataPolicyServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datapolicies_v1_internal
}  // namespace cloud
}  // namespace google
