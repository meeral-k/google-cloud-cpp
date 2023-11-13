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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#include "google/cloud/aiplatform/v1/internal/metadata_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/metadata_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetadataServiceMetadata::MetadataServiceMetadata(
    std::shared_ptr<MetadataServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncCreateMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateMetadataStore(cq, std::move(context), options,
                                          request);
}

StatusOr<google::cloud::aiplatform::v1::MetadataStore>
MetadataServiceMetadata::GetMetadataStore(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetadataStore(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataStoresResponse>
MetadataServiceMetadata::ListMetadataStores(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListMetadataStoresRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMetadataStores(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncDeleteMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteMetadataStore(cq, std::move(context), options,
                                          request);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceMetadata::CreateArtifact(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateArtifact(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceMetadata::GetArtifact(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetArtifact(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListArtifactsResponse>
MetadataServiceMetadata::ListArtifacts(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListArtifactsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListArtifacts(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceMetadata::UpdateArtifact(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("artifact.name=",
                           internal::UrlEncode(request.artifact().name())));
  return child_->UpdateArtifact(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncDeleteArtifact(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteArtifact(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncPurgeArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncPurgeArtifacts(cq, std::move(context), options, request);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceMetadata::CreateContext(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateContextRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateContext(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceMetadata::GetContext(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetContextRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetContext(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListContextsResponse>
MetadataServiceMetadata::ListContexts(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListContextsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListContexts(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceMetadata::UpdateContext(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("context.name=",
                           internal::UrlEncode(request.context().name())));
  return child_->UpdateContext(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncDeleteContext(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteContext(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncPurgeContexts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncPurgeContexts(cq, std::move(context), options, request);
}

StatusOr<
    google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
MetadataServiceMetadata::AddContextArtifactsAndExecutions(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        AddContextArtifactsAndExecutionsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("context=", internal::UrlEncode(request.context())));
  return child_->AddContextArtifactsAndExecutions(context, request);
}

StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
MetadataServiceMetadata::AddContextChildren(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::AddContextChildrenRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("context=", internal::UrlEncode(request.context())));
  return child_->AddContextChildren(context, request);
}

StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
MetadataServiceMetadata::RemoveContextChildren(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("context=", internal::UrlEncode(request.context())));
  return child_->RemoveContextChildren(context, request);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceMetadata::QueryContextLineageSubgraph(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("context=", internal::UrlEncode(request.context())));
  return child_->QueryContextLineageSubgraph(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceMetadata::CreateExecution(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateExecutionRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateExecution(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceMetadata::GetExecution(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetExecution(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListExecutionsResponse>
MetadataServiceMetadata::ListExecutions(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListExecutionsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListExecutions(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceMetadata::UpdateExecution(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateExecutionRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("execution.name=",
                           internal::UrlEncode(request.execution().name())));
  return child_->UpdateExecution(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteExecution(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncPurgeExecutions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncPurgeExecutions(cq, std::move(context), options, request);
}

StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
MetadataServiceMetadata::AddExecutionEvents(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("execution=", internal::UrlEncode(request.execution())));
  return child_->AddExecutionEvents(context, request);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceMetadata::QueryExecutionInputsAndOutputs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::QueryExecutionInputsAndOutputsRequest const&
        request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("execution=", internal::UrlEncode(request.execution())));
  return child_->QueryExecutionInputsAndOutputs(context, request);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceMetadata::CreateMetadataSchema(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateMetadataSchema(context, request);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceMetadata::GetMetadataSchema(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetadataSchema(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataSchemasResponse>
MetadataServiceMetadata::ListMetadataSchemas(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListMetadataSchemasRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMetadataSchemas(context, request);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceMetadata::QueryArtifactLineageSubgraph(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
        request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("artifact=", internal::UrlEncode(request.artifact())));
  return child_->QueryArtifactLineageSubgraph(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> MetadataServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void MetadataServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void MetadataServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
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
