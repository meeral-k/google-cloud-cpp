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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/internal/test_cases_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/test_case.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TestCasesStub::~TestCasesStub() = default;

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCasesResponse>
DefaultTestCasesStub::ListTestCases(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest const& request) {
  google::cloud::dialogflow::cx::v3::ListTestCasesResponse response;
  auto status = grpc_stub_->ListTestCases(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTestCasesStub::BatchDeleteTestCases(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->BatchDeleteTestCases(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
DefaultTestCasesStub::GetTestCase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request) {
  google::cloud::dialogflow::cx::v3::TestCase response;
  auto status = grpc_stub_->GetTestCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
DefaultTestCasesStub::CreateTestCase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request) {
  google::cloud::dialogflow::cx::v3::TestCase response;
  auto status = grpc_stub_->CreateTestCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
DefaultTestCasesStub::UpdateTestCase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request) {
  google::cloud::dialogflow::cx::v3::TestCase response;
  auto status = grpc_stub_->UpdateTestCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTestCasesStub::AsyncRunTestCase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::RunTestCaseRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRunTestCase(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultTestCasesStub::AsyncBatchRunTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchRunTestCases(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
DefaultTestCasesStub::CalculateCoverage(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::CalculateCoverageResponse response;
  auto status =
      grpc_stub_->CalculateCoverage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTestCasesStub::AsyncImportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::ImportTestCasesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportTestCases(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultTestCasesStub::AsyncExportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::ExportTestCasesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportTestCases(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse>
DefaultTestCasesStub::ListTestCaseResults(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse response;
  auto status =
      grpc_stub_->ListTestCaseResults(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
DefaultTestCasesStub::GetTestCaseResult(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::TestCaseResult response;
  auto status =
      grpc_stub_->GetTestCaseResult(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTestCasesStub::AsyncGetOperation(
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

future<Status> DefaultTestCasesStub::AsyncCancelOperation(
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
