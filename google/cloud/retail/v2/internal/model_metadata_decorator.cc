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
// source: google/cloud/retail/v2/model_service.proto

#include "google/cloud/retail/v2/internal/model_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/model_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceMetadata::ModelServiceMetadata(
    std::shared_ptr<ModelServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
ModelServiceMetadata::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::CreateModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateModel(cq, std::move(context), request);
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceMetadata::GetModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetModelRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetModel(context, request);
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceMetadata::PauseModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::PauseModelRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->PauseModel(context, request);
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceMetadata::ResumeModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ResumeModelRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ResumeModel(context, request);
}

Status ModelServiceMetadata::DeleteModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::DeleteModelRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteModel(context, request);
}

StatusOr<google::cloud::retail::v2::ListModelsResponse>
ModelServiceMetadata::ListModels(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListModelsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListModels(context, request);
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceMetadata::UpdateModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateModelRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("model.name=", internal::UrlEncode(request.model().name())));
  return child_->UpdateModel(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceMetadata::AsyncTuneModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::TuneModelRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncTuneModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ModelServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ModelServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ModelServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
