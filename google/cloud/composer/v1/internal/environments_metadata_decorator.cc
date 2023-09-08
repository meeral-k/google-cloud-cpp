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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/v1/internal/environments_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orchestration/airflow/service/v1/environments.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsMetadata::EnvironmentsMetadata(
    std::shared_ptr<EnvironmentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEnvironment(cq, std::move(context), request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsMetadata::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEnvironment(context, request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse>
EnvironmentsMetadata::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        ListEnvironmentsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEnvironments(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteEnvironment(cq, std::move(context), request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ExecuteAirflowCommandResponse>
EnvironmentsMetadata::ExecuteAirflowCommand(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        ExecuteAirflowCommandRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->ExecuteAirflowCommand(context, request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             StopAirflowCommandResponse>
EnvironmentsMetadata::StopAirflowCommand(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        StopAirflowCommandRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->StopAirflowCommand(context, request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             PollAirflowCommandResponse>
EnvironmentsMetadata::PollAirflowCommand(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        PollAirflowCommandRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->PollAirflowCommand(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncSaveSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncSaveSnapshot(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncLoadSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncLoadSnapshot(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncDatabaseFailover(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncDatabaseFailover(cq, std::move(context), request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             FetchDatabasePropertiesResponse>
EnvironmentsMetadata::FetchDatabaseProperties(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        FetchDatabasePropertiesRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->FetchDatabaseProperties(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> EnvironmentsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
