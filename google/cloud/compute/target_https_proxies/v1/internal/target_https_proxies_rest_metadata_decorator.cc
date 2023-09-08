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
// source:
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#include "google/cloud/compute/target_https_proxies/v1/internal/target_https_proxies_rest_metadata_decorator.h"
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
namespace compute_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpsProxiesRestMetadata::TargetHttpsProxiesRestMetadata(
    std::shared_ptr<TargetHttpsProxiesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
TargetHttpsProxiesRestMetadata::AggregatedListTargetHttpsProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        AggregatedListTargetHttpsProxiesRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListTargetHttpsProxies(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncDeleteTargetHttpsProxies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        DeleteTargetHttpsProxiesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteTargetHttpsProxies(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
TargetHttpsProxiesRestMetadata::GetTargetHttpsProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        GetTargetHttpsProxiesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetTargetHttpsProxies(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncInsertTargetHttpsProxies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        InsertTargetHttpsProxiesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertTargetHttpsProxies(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyList>
TargetHttpsProxiesRestMetadata::ListTargetHttpsProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        ListTargetHttpsProxiesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListTargetHttpsProxies(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncPatchTargetHttpsProxies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        PatchTargetHttpsProxiesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchTargetHttpsProxies(cq, std::move(rest_context),
                                              request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncSetCertificateMap(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetCertificateMapRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetCertificateMap(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncSetQuicOverride(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetQuicOverrideRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetQuicOverride(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncSetSslCertificates(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetSslCertificatesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetSslCertificates(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncSetSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetSslPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetSslPolicy(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncSetUrlMap(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetUrlMapRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetUrlMap(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> TargetHttpsProxiesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void TargetHttpsProxiesRestMetadata::SetMetadata(
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
}  // namespace compute_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google
