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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/v1/internal/document_processor_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/documentai/v1/document_processor_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceStub::~DocumentProcessorServiceStub() = default;

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DefaultDocumentProcessorServiceStub::ProcessDocument(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  google::cloud::documentai::v1::ProcessResponse response;
  auto status =
      grpc_stub_->ProcessDocument(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::BatchProcessRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::documentai::v1::BatchProcessRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchProcessDocuments(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DefaultDocumentProcessorServiceStub::FetchProcessorTypes(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  google::cloud::documentai::v1::FetchProcessorTypesResponse response;
  auto status =
      grpc_stub_->FetchProcessorTypes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
DefaultDocumentProcessorServiceStub::ListProcessorTypes(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::ListProcessorTypesRequest const& request) {
  google::cloud::documentai::v1::ListProcessorTypesResponse response;
  auto status =
      grpc_stub_->ListProcessorTypes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DefaultDocumentProcessorServiceStub::GetProcessorType(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  google::cloud::documentai::v1::ProcessorType response;
  auto status =
      grpc_stub_->GetProcessorType(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
DefaultDocumentProcessorServiceStub::ListProcessors(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::ListProcessorsRequest const& request) {
  google::cloud::documentai::v1::ListProcessorsResponse response;
  auto status = grpc_stub_->ListProcessors(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::documentai::v1::Processor>
DefaultDocumentProcessorServiceStub::GetProcessor(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  google::cloud::documentai::v1::Processor response;
  auto status = grpc_stub_->GetProcessor(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncTrainProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::TrainProcessorVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::documentai::v1::TrainProcessorVersionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTrainProcessorVersion(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DefaultDocumentProcessorServiceStub::GetProcessorVersion(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  google::cloud::documentai::v1::ProcessorVersion response;
  auto status =
      grpc_stub_->GetProcessorVersion(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
DefaultDocumentProcessorServiceStub::ListProcessorVersions(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::ListProcessorVersionsRequest const&
        request) {
  google::cloud::documentai::v1::ListProcessorVersionsResponse response;
  auto status =
      grpc_stub_->ListProcessorVersions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncDeleteProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::DeleteProcessorVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteProcessorVersion(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncDeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::DeployProcessorVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::documentai::v1::DeployProcessorVersionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeployProcessorVersion(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncUndeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::UndeployProcessorVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeployProcessorVersion(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::documentai::v1::Processor>
DefaultDocumentProcessorServiceStub::CreateProcessor(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  google::cloud::documentai::v1::Processor response;
  auto status =
      grpc_stub_->CreateProcessor(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncDeleteProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::DeleteProcessorRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::documentai::v1::DeleteProcessorRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteProcessor(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncEnableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::EnableProcessorRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::documentai::v1::EnableProcessorRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEnableProcessor(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncDisableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::DisableProcessorRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::documentai::v1::DisableProcessorRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDisableProcessor(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncSetDefaultProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::documentai::v1::
                 SetDefaultProcessorVersionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSetDefaultProcessorVersion(context, request,
                                                           cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::ReviewDocumentRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::documentai::v1::ReviewDocumentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReviewDocument(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncEvaluateProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEvaluateProcessorVersion(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::documentai::v1::Evaluation>
DefaultDocumentProcessorServiceStub::GetEvaluation(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::GetEvaluationRequest const& request) {
  google::cloud::documentai::v1::Evaluation response;
  auto status = grpc_stub_->GetEvaluation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
DefaultDocumentProcessorServiceStub::ListEvaluations(
    grpc::ClientContext& client_context,
    google::cloud::documentai::v1::ListEvaluationsRequest const& request) {
  google::cloud::documentai::v1::ListEvaluationsResponse response;
  auto status =
      grpc_stub_->ListEvaluations(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDocumentProcessorServiceStub::AsyncGetOperation(
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

future<Status> DefaultDocumentProcessorServiceStub::AsyncCancelOperation(
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
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google
