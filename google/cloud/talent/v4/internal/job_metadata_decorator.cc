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
// source: google/cloud/talent/v4/job_service.proto

#include "google/cloud/talent/v4/internal/job_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/talent/v4/job_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceMetadata::JobServiceMetadata(
    std::shared_ptr<JobServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::talent::v4::Job> JobServiceMetadata::CreateJob(
    grpc::ClientContext& context,
    google::cloud::talent::v4::CreateJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncBatchCreateJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchCreateJobs(cq, std::move(context), request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceMetadata::GetJob(
    grpc::ClientContext& context,
    google::cloud::talent::v4::GetJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetJob(context, request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceMetadata::UpdateJob(
    grpc::ClientContext& context,
    google::cloud::talent::v4::UpdateJobRequest const& request) {
  SetMetadata(context, absl::StrCat("job.name=",
                                    internal::UrlEncode(request.job().name())));
  return child_->UpdateJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncBatchUpdateJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchUpdateJobs(cq, std::move(context), request);
}

Status JobServiceMetadata::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::talent::v4::DeleteJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncBatchDeleteJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchDeleteJobs(cq, std::move(context), request);
}

StatusOr<google::cloud::talent::v4::ListJobsResponse>
JobServiceMetadata::ListJobs(
    grpc::ClientContext& context,
    google::cloud::talent::v4::ListJobsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListJobs(context, request);
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceMetadata::SearchJobs(
    grpc::ClientContext& context,
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchJobs(context, request);
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceMetadata::SearchJobsForAlert(
    grpc::ClientContext& context,
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchJobsForAlert(context, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> JobServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void JobServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void JobServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
