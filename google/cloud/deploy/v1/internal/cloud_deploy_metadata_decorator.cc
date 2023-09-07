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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/internal/cloud_deploy_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/deploy/v1/cloud_deploy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployMetadata::CloudDeployMetadata(
    std::shared_ptr<CloudDeployStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::cloud::deploy::v1::ListDeliveryPipelinesResponse>
CloudDeployMetadata::ListDeliveryPipelines(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDeliveryPipelines(context, request);
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployMetadata::GetDeliveryPipeline(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDeliveryPipeline(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncCreateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDeliveryPipeline(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncUpdateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("delivery_pipeline.name=",
                   internal::UrlEncode(request.delivery_pipeline().name())));
  return child_->AsyncUpdateDeliveryPipeline(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncDeleteDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDeliveryPipeline(cq, std::move(context), request);
}

StatusOr<google::cloud::deploy::v1::ListTargetsResponse>
CloudDeployMetadata::ListTargets(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListTargetsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTargets(context, request);
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployMetadata::GetTarget(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTarget(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncCreateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateTarget(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncUpdateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("target.name=",
                           internal::UrlEncode(request.target().name())));
  return child_->AsyncUpdateTarget(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncDeleteTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTarget(cq, std::move(context), request);
}

StatusOr<google::cloud::deploy::v1::ListReleasesResponse>
CloudDeployMetadata::ListReleases(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListReleasesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListReleases(context, request);
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployMetadata::GetRelease(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRelease(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncCreateRelease(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateRelease(cq, std::move(context), request);
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployMetadata::AbandonRelease(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AbandonRelease(context, request);
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployMetadata::ApproveRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ApproveRollout(context, request);
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployMetadata::AdvanceRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AdvanceRollout(context, request);
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployMetadata::CancelRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::CancelRolloutRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelRollout(context, request);
}

StatusOr<google::cloud::deploy::v1::ListRolloutsResponse>
CloudDeployMetadata::ListRollouts(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListRolloutsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRollouts(context, request);
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployMetadata::GetRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRollout(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncCreateRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateRollout(cq, std::move(context), request);
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployMetadata::IgnoreJob(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::IgnoreJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("rollout=", internal::UrlEncode(request.rollout())));
  return child_->IgnoreJob(context, request);
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployMetadata::RetryJob(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("rollout=", internal::UrlEncode(request.rollout())));
  return child_->RetryJob(context, request);
}

StatusOr<google::cloud::deploy::v1::ListJobRunsResponse>
CloudDeployMetadata::ListJobRuns(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListJobRunsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListJobRuns(context, request);
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployMetadata::GetJobRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetJobRun(context, request);
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployMetadata::TerminateJobRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->TerminateJobRun(context, request);
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployMetadata::GetConfig(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudDeployMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudDeployMetadata::SetMetadata(grpc::ClientContext& context,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudDeployMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
