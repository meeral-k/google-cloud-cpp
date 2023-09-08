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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/v1/internal/auto_ml_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/automl/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoMlMetadata::AutoMlMetadata(
    std::shared_ptr<AutoMlStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDataset(cq, std::move(context), request);
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlMetadata::GetDataset(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetDatasetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataset(context, request);
}

StatusOr<google::cloud::automl::v1::ListDatasetsResponse>
AutoMlMetadata::ListDatasets(
    grpc::ClientContext& context,
    google::cloud::automl::v1::ListDatasetsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatasets(context, request);
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlMetadata::UpdateDataset(
    grpc::ClientContext& context,
    google::cloud::automl::v1::UpdateDatasetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("dataset.name=",
                           internal::UrlEncode(request.dataset().name())));
  return child_->UpdateDataset(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataset(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::ImportDataRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncImportData(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::ExportDataRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncExportData(cq, std::move(context), request);
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlMetadata::GetAnnotationSpec(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetAnnotationSpecRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAnnotationSpec(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::CreateModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateModel(cq, std::move(context), request);
}

StatusOr<google::cloud::automl::v1::Model> AutoMlMetadata::GetModel(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetModelRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetModel(context, request);
}

StatusOr<google::cloud::automl::v1::ListModelsResponse>
AutoMlMetadata::ListModels(
    grpc::ClientContext& context,
    google::cloud::automl::v1::ListModelsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListModels(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteModel(cq, std::move(context), request);
}

StatusOr<google::cloud::automl::v1::Model> AutoMlMetadata::UpdateModel(
    grpc::ClientContext& context,
    google::cloud::automl::v1::UpdateModelRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("model.name=", internal::UrlEncode(request.model().name())));
  return child_->UpdateModel(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncDeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::DeployModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeployModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncUndeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeployModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncExportModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::ExportModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncExportModel(cq, std::move(context), request);
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlMetadata::GetModelEvaluation(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetModelEvaluationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetModelEvaluation(context, request);
}

StatusOr<google::cloud::automl::v1::ListModelEvaluationsResponse>
AutoMlMetadata::ListModelEvaluations(
    grpc::ClientContext& context,
    google::cloud::automl::v1::ListModelEvaluationsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListModelEvaluations(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AutoMlMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AutoMlMetadata::SetMetadata(grpc::ClientContext& context,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AutoMlMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google
