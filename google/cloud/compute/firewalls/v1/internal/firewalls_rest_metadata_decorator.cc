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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#include "google/cloud/compute/firewalls/v1/internal/firewalls_rest_metadata_decorator.h"
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
namespace compute_firewalls_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallsRestMetadata::FirewallsRestMetadata(
    std::shared_ptr<FirewallsRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsRestMetadata::AsyncDeleteFirewalls(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::firewalls::v1::DeleteFirewallsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteFirewalls(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Firewall>
FirewallsRestMetadata::GetFirewalls(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewalls::v1::GetFirewallsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetFirewalls(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsRestMetadata::AsyncInsertFirewalls(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::firewalls::v1::InsertFirewallsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertFirewalls(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallList>
FirewallsRestMetadata::ListFirewalls(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListFirewalls(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsRestMetadata::AsyncPatchFirewalls(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::firewalls::v1::PatchFirewallsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchFirewalls(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsRestMetadata::AsyncUpdateFirewalls(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::firewalls::v1::UpdateFirewallsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateFirewalls(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> FirewallsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void FirewallsRestMetadata::SetMetadata(
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
}  // namespace compute_firewalls_v1_internal
}  // namespace cloud
}  // namespace google
