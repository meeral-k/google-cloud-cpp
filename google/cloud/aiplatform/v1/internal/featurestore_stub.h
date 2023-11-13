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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/featurestore_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FeaturestoreServiceStub {
 public:
  virtual ~FeaturestoreServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Featurestore> GetFeaturestore(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
  ListFeaturestores(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListFeaturestoresRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateEntityType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::EntityType> GetEntityType(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
  ListEntityTypes(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListEntityTypesRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::EntityType> UpdateEntityType(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateEntityTypeRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteEntityType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchCreateFeatures(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Feature> GetFeature(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetFeatureRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse>
  ListFeatures(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListFeaturesRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Feature> UpdateFeature(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncImportFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchReadFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncExportFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
  SearchFeatures(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::SearchFeaturesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultFeaturestoreServiceStub : public FeaturestoreServiceStub {
 public:
  DefaultFeaturestoreServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::FeaturestoreService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Featurestore> GetFeaturestore(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
  ListFeaturestores(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListFeaturestoresRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeaturestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEntityType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::EntityType> GetEntityType(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
  ListEntityTypes(grpc::ClientContext& client_context,
                  google::cloud::aiplatform::v1::ListEntityTypesRequest const&
                      request) override;

  StatusOr<google::cloud::aiplatform::v1::EntityType> UpdateEntityType(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEntityType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateFeatures(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Feature> GetFeature(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetFeatureRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse> ListFeatures(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListFeaturesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Feature> UpdateFeature(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchReadFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeatureValues(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
  SearchFeatures(grpc::ClientContext& client_context,
                 google::cloud::aiplatform::v1::SearchFeaturesRequest const&
                     request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::aiplatform::v1::FeaturestoreService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_STUB_H
