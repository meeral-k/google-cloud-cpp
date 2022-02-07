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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#include "google/cloud/managedidentities/internal/managed_identities_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/managedidentities/v1/managed_identities_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace managedidentities_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedIdentitiesServiceMetadata::ManagedIdentitiesServiceMetadata(
    std::shared_ptr<ManagedIdentitiesServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncCreateMicrosoftAdDomain(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateMicrosoftAdDomain(cq, std::move(context), request);
}

StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
ManagedIdentitiesServiceMetadata::ResetAdminPassword(
    grpc::ClientContext& context,
    google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ResetAdminPassword(context, request);
}

StatusOr<google::cloud::managedidentities::v1::ListDomainsResponse>
ManagedIdentitiesServiceMetadata::ListDomains(
    grpc::ClientContext& context,
    google::cloud::managedidentities::v1::ListDomainsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDomains(context, request);
}

StatusOr<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceMetadata::GetDomain(
    grpc::ClientContext& context,
    google::cloud::managedidentities::v1::GetDomainRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDomain(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncUpdateDomain(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::UpdateDomainRequest const& request) {
  SetMetadata(*context, "domain.name=" + request.domain().name());
  return child_->AsyncUpdateDomain(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncDeleteDomain(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::DeleteDomainRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteDomain(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncAttachTrust(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::AttachTrustRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncAttachTrust(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncReconfigureTrust(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncReconfigureTrust(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncDetachTrust(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::DetachTrustRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDetachTrust(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncValidateTrust(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::managedidentities::v1::ValidateTrustRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncValidateTrust(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ManagedIdentitiesServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ManagedIdentitiesServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ManagedIdentitiesServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_internal
}  // namespace cloud
}  // namespace google
