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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/internal/gke_hub_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubMetadata::GkeHubMetadata(std::shared_ptr<GkeHubStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
GkeHubMetadata::ListMemberships(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListMemberships(context, request);
}

StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
GkeHubMetadata::ListFeatures(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListFeatures(context, request);
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubMetadata::GetMembership(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetMembership(context, request);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubMetadata::GetFeature(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetFeature(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncCreateMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateMembership(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateFeature(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncDeleteMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteMembership(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteFeature(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncUpdateMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateMembership(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncUpdateFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateFeature(cq, std::move(context), request);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubMetadata::GenerateConnectManifest(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GenerateConnectManifest(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> GkeHubMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void GkeHubMetadata::SetMetadata(grpc::ClientContext& context,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void GkeHubMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google
