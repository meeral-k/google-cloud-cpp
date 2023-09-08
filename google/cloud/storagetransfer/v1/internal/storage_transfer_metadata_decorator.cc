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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/v1/internal/storage_transfer_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/storagetransfer/v1/transfer.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagetransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceMetadata::StorageTransferServiceMetadata(
    std::shared_ptr<StorageTransferServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceMetadata::GetGoogleServiceAccount(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  SetMetadata(context, absl::StrCat("project_id=",
                                    internal::UrlEncode(request.project_id())));
  return child_->GetGoogleServiceAccount(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceMetadata::CreateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  SetMetadata(context);
  return child_->CreateTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceMetadata::UpdateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  SetMetadata(context, absl::StrCat("job_name=",
                                    internal::UrlEncode(request.job_name())));
  return child_->UpdateTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceMetadata::GetTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  SetMetadata(context, absl::StrCat("job_name=",
                                    internal::UrlEncode(request.job_name())));
  return child_->GetTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::ListTransferJobsResponse>
StorageTransferServiceMetadata::ListTransferJobs(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListTransferJobsRequest const& request) {
  SetMetadata(context);
  return child_->ListTransferJobs(context, request);
}

Status StorageTransferServiceMetadata::PauseTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->PauseTransferOperation(context, request);
}

Status StorageTransferServiceMetadata::ResumeTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ResumeTransferOperation(context, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceMetadata::AsyncRunTransferJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  SetMetadata(*context, absl::StrCat("job_name=",
                                     internal::UrlEncode(request.job_name())));
  return child_->AsyncRunTransferJob(cq, std::move(context), request);
}

Status StorageTransferServiceMetadata::DeleteTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  SetMetadata(context, absl::StrCat("job_name=",
                                    internal::UrlEncode(request.job_name())));
  return child_->DeleteTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceMetadata::CreateAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  SetMetadata(context, absl::StrCat("project_id=",
                                    internal::UrlEncode(request.project_id())));
  return child_->CreateAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceMetadata::UpdateAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  SetMetadata(context,
              absl::StrCat("agent_pool.name=",
                           internal::UrlEncode(request.agent_pool().name())));
  return child_->UpdateAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceMetadata::GetAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::ListAgentPoolsResponse>
StorageTransferServiceMetadata::ListAgentPools(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListAgentPoolsRequest const& request) {
  SetMetadata(context, absl::StrCat("project_id=",
                                    internal::UrlEncode(request.project_id())));
  return child_->ListAgentPools(context, request);
}

Status StorageTransferServiceMetadata::DeleteAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAgentPool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> StorageTransferServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void StorageTransferServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void StorageTransferServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace storagetransfer_v1_internal
}  // namespace cloud
}  // namespace google
