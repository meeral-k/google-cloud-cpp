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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_metadata_decorator.h"
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
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeGroupsRestMetadata::NodeGroupsRestMetadata(
    std::shared_ptr<NodeGroupsRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncAddNodes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddNodes(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
NodeGroupsRestMetadata::AggregatedListNodeGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListNodeGroups(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncDeleteNodeGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteNodeGroups(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncDeleteNodes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteNodes(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsRestMetadata::GetNodeGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetNodeGroups(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncInsertNodeGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertNodeGroups(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupList>
NodeGroupsRestMetadata::ListNodeGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListNodeGroups(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupsListNodes>
NodeGroupsRestMetadata::ListNodes(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListNodes(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncPatchNodeGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchNodeGroups(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncSetNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetNodeTemplate(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncSimulateMaintenanceEvent(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::
        SimulateMaintenanceEventRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSimulateMaintenanceEvent(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeGroupsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> NodeGroupsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void NodeGroupsRestMetadata::SetMetadata(
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
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google
