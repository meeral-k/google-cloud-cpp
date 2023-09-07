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
// source: google/cloud/aiplatform/v1/index_service.proto

#include "google/cloud/aiplatform/v1/internal/index_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/index_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IndexServiceMetadata::IndexServiceMetadata(
    std::shared_ptr<IndexServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
IndexServiceMetadata::AsyncCreateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateIndexRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateIndex(cq, std::move(context), request);
}

StatusOr<google::cloud::aiplatform::v1::Index> IndexServiceMetadata::GetIndex(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetIndexRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetIndex(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListIndexesResponse>
IndexServiceMetadata::ListIndexes(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListIndexesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListIndexes(context, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceMetadata::AsyncUpdateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::UpdateIndexRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("index.name=", internal::UrlEncode(request.index().name())));
  return child_->AsyncUpdateIndex(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceMetadata::AsyncDeleteIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteIndexRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteIndex(cq, std::move(context), request);
}

StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
IndexServiceMetadata::UpsertDatapoints(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("index=", internal::UrlEncode(request.index())));
  return child_->UpsertDatapoints(context, request);
}

StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
IndexServiceMetadata::RemoveDatapoints(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("index=", internal::UrlEncode(request.index())));
  return child_->RemoveDatapoints(context, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> IndexServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void IndexServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void IndexServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
