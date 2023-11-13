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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#include "google/cloud/dialogflow_cx/internal/agents_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/agent.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsStub::~AgentsStub() = default;

StatusOr<google::cloud::dialogflow::cx::v3::ListAgentsResponse>
DefaultAgentsStub::ListAgents(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ListAgentsRequest const& request) {
  google::cloud::dialogflow::cx::v3::ListAgentsResponse response;
  auto status = grpc_stub_->ListAgents(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> DefaultAgentsStub::GetAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
  google::cloud::dialogflow::cx::v3::Agent response;
  auto status = grpc_stub_->GetAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
DefaultAgentsStub::CreateAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request) {
  google::cloud::dialogflow::cx::v3::Agent response;
  auto status = grpc_stub_->CreateAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
DefaultAgentsStub::UpdateAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request) {
  google::cloud::dialogflow::cx::v3::Agent response;
  auto status = grpc_stub_->UpdateAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAgentsStub::DeleteAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncExportAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::ExportAgentRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportAgent(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncRestoreAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::RestoreAgentRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreAgent(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
DefaultAgentsStub::ValidateAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ValidateAgentRequest const& request) {
  google::cloud::dialogflow::cx::v3::AgentValidationResult response;
  auto status = grpc_stub_->ValidateAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
DefaultAgentsStub::GetAgentValidationResult(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::AgentValidationResult response;
  auto status =
      grpc_stub_->GetAgentValidationResult(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
DefaultAgentsStub::GetGenerativeSettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetGenerativeSettingsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::GenerativeSettings response;
  auto status =
      grpc_stub_->GetGenerativeSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
DefaultAgentsStub::UpdateGenerativeSettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::UpdateGenerativeSettingsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::GenerativeSettings response;
  auto status =
      grpc_stub_->UpdateGenerativeSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAgentsStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
