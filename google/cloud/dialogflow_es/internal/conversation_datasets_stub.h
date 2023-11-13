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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/conversation_dataset.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationDatasetsStub {
 public:
  virtual ~ConversationDatasetsStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConversationDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
  GetConversationDataset(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::dialogflow::v2::ListConversationDatasetsResponse>
  ListConversationDatasets(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::ListConversationDatasetsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConversationDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncImportConversationData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultConversationDatasetsStub : public ConversationDatasetsStub {
 public:
  DefaultConversationDatasetsStub(
      std::unique_ptr<
          google::cloud::dialogflow::v2::ConversationDatasets::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConversationDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
  GetConversationDataset(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ListConversationDatasetsResponse>
  ListConversationDatasets(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::ListConversationDatasetsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConversationDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportConversationData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
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
      google::cloud::dialogflow::v2::ConversationDatasets::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_STUB_H
