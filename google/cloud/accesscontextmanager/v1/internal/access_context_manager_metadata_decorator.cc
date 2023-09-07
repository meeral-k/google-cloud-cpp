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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/identity/accesscontextmanager/v1/access_context_manager.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessContextManagerMetadata::AccessContextManagerMetadata(
    std::shared_ptr<AccessContextManagerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
AccessContextManagerMetadata::ListAccessPolicies(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest const&
        request) {
  SetMetadata(context);
  return child_->ListAccessPolicies(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerMetadata::GetAccessPolicy(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAccessPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncCreateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  SetMetadata(*context);
  return child_->AsyncCreateAccessPolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncUpdateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("policy.name=",
                           internal::UrlEncode(request.policy().name())));
  return child_->AsyncUpdateAccessPolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncDeleteAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteAccessPolicy(cq, std::move(context), request);
}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
AccessContextManagerMetadata::ListAccessLevels(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAccessLevels(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerMetadata::GetAccessLevel(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAccessLevel(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncCreateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateAccessLevel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncUpdateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("access_level.name=",
                           internal::UrlEncode(request.access_level().name())));
  return child_->AsyncUpdateAccessLevel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncDeleteAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteAccessLevel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncReplaceAccessLevels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncReplaceAccessLevels(cq, std::move(context), request);
}

StatusOr<
    google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
AccessContextManagerMetadata::ListServicePerimeters(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListServicePerimetersRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListServicePerimeters(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerMetadata::GetServicePerimeter(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetServicePerimeter(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncCreateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateServicePerimeter(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncUpdateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("service_perimeter.name=",
                   internal::UrlEncode(request.service_perimeter().name())));
  return child_->AsyncUpdateServicePerimeter(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncDeleteServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteServicePerimeter(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncReplaceServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncReplaceServicePerimeters(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncCommitServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCommitServicePerimeters(cq, std::move(context), request);
}

StatusOr<google::identity::accesscontextmanager::v1::
             ListGcpUserAccessBindingsResponse>
AccessContextManagerMetadata::ListGcpUserAccessBindings(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListGcpUserAccessBindingsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListGcpUserAccessBindings(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerMetadata::GetGcpUserAccessBinding(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGcpUserAccessBinding(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncCreateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateGcpUserAccessBinding(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncUpdateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("gcp_user_access_binding.name=",
                           internal::UrlEncode(
                               request.gcp_user_access_binding().name())));
  return child_->AsyncUpdateGcpUserAccessBinding(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncDeleteGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteGcpUserAccessBinding(cq, std::move(context),
                                                 request);
}

StatusOr<google::iam::v1::Policy> AccessContextManagerMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> AccessContextManagerMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AccessContextManagerMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AccessContextManagerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AccessContextManagerMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AccessContextManagerMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google
