// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/spanner/admin/instance/v1/spanner_instance_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminMetadata::InstanceAdminMetadata(
    std::shared_ptr<InstanceAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
InstanceAdminMetadata::ListInstanceConfigs(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInstanceConfigs(context, request);
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminMetadata::GetInstanceConfig(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInstanceConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminMetadata::AsyncCreateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateInstanceConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminMetadata::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  SetMetadata(
      *context,
      absl::StrCat("instance_config.name=",
                   internal::UrlEncode(request.instance_config().name())));
  return child_->AsyncUpdateInstanceConfig(cq, std::move(context), request);
}

Status InstanceAdminMetadata::DeleteInstanceConfig(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInstanceConfig(context, request);
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
InstanceAdminMetadata::ListInstanceConfigOperations(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInstanceConfigOperations(context, request);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
InstanceAdminMetadata::ListInstances(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInstances(context, request);
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminMetadata::GetInstance(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminMetadata::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminMetadata::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("instance.name=",
                           internal::UrlEncode(request.instance().name())));
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

Status InstanceAdminMetadata::DeleteInstance(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInstance(context, request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> InstanceAdminMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void InstanceAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void InstanceAdminMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
