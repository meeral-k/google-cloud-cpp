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
// source: google/cloud/compute/backend_services/v1/backend_services.proto

#include "google/cloud/compute/backend_services/v1/internal/backend_services_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackendServicesRestMetadata::BackendServicesRestMetadata(
    std::shared_ptr<BackendServicesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncAddSignedUrlKey(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        AddSignedUrlKeyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddSignedUrlKey(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceAggregatedList>
BackendServicesRestMetadata::AggregatedListBackendServices(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        AggregatedListBackendServicesRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListBackendServices(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncDeleteBackendServices(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        DeleteBackendServicesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteBackendServices(cq, std::move(rest_context),
                                            request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncDeleteSignedUrlKey(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        DeleteSignedUrlKeyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteSignedUrlKey(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendService>
BackendServicesRestMetadata::GetBackendServices(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        GetBackendServicesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetBackendServices(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
BackendServicesRestMetadata::GetHealth(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::backend_services::v1::GetHealthRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetHealth(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendServicesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncInsertBackendServices(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        InsertBackendServicesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertBackendServices(cq, std::move(rest_context),
                                            request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceList>
BackendServicesRestMetadata::ListBackendServices(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        ListBackendServicesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListBackendServices(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncPatchBackendServices(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        PatchBackendServicesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchBackendServices(cq, std::move(rest_context),
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncSetEdgeSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        SetEdgeSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetEdgeSecurityPolicy(cq, std::move(rest_context),
                                            request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendServicesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncSetSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        SetSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetSecurityPolicy(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncUpdateBackendServices(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::backend_services::v1::
        UpdateBackendServicesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateBackendServices(cq, std::move(rest_context),
                                            request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> BackendServicesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void BackendServicesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_services_v1_internal
}  // namespace cloud
}  // namespace google
