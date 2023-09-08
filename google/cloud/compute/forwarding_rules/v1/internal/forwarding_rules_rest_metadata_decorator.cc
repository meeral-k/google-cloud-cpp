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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_rest_metadata_decorator.h"
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
namespace compute_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ForwardingRulesRestMetadata::ForwardingRulesRestMetadata(
    std::shared_ptr<ForwardingRulesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleAggregatedList>
ForwardingRulesRestMetadata::AggregatedListForwardingRules(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::
        AggregatedListForwardingRulesRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListForwardingRules(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestMetadata::AsyncDeleteForwardingRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::
        DeleteForwardingRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteForwardingRules(cq, std::move(rest_context),
                                            request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesRestMetadata::GetForwardingRules(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::
        GetForwardingRulesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetForwardingRules(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestMetadata::AsyncInsertForwardingRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::
        InsertForwardingRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertForwardingRules(cq, std::move(rest_context),
                                            request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleList>
ForwardingRulesRestMetadata::ListForwardingRules(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::
        ListForwardingRulesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListForwardingRules(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestMetadata::AsyncPatchForwardingRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::
        PatchForwardingRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchForwardingRules(cq, std::move(rest_context),
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetLabels(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestMetadata::AsyncSetTarget(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetTarget(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> ForwardingRulesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void ForwardingRulesRestMetadata::SetMetadata(
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
}  // namespace compute_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google
