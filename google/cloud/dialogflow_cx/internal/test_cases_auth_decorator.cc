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

#include "google/cloud/dialogflow_cx/internal/test_cases_auth_decorator.h"
#include <google/cloud/dialogflow/cx/v3/test_case.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TestCasesAuth::TestCasesAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<TestCasesStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCasesResponse>
TestCasesAuth::ListTestCases(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTestCases(context, request);
}

Status TestCasesAuth::BatchDeleteTestCases(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchDeleteTestCases(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesAuth::GetTestCase(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTestCase(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesAuth::CreateTestCase(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTestCase(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesAuth::UpdateTestCase(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTestCase(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesAuth::AsyncRunTestCase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRunTestCase(cq, *std::move(context), options,
                                       request);
      });
}

future<StatusOr<google::longrunning::Operation>>
TestCasesAuth::AsyncBatchRunTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchRunTestCases(cq, *std::move(context), options,
                                             request);
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
TestCasesAuth::CalculateCoverage(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CalculateCoverage(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesAuth::AsyncImportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncImportTestCases(cq, *std::move(context), options,
                                           request);
      });
}

future<StatusOr<google::longrunning::Operation>>
TestCasesAuth::AsyncExportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportTestCases(cq, *std::move(context), options,
                                           request);
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse>
TestCasesAuth::ListTestCaseResults(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTestCaseResults(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesAuth::GetTestCaseResult(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTestCaseResult(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), options,
                                        request);
      });
}

future<Status> TestCasesAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), options,
                                           request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
