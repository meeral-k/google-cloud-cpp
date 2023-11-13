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
// source: google/cloud/talent/v4/job_service.proto

#include "google/cloud/talent/v4/internal/job_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/talent/v4/job_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceStub::~JobServiceStub() = default;

StatusOr<google::cloud::talent::v4::Job> DefaultJobServiceStub::CreateJob(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::CreateJobRequest const& request) {
  google::cloud::talent::v4::Job response;
  auto status = grpc_stub_->CreateJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncBatchCreateJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::talent::v4::BatchCreateJobsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::talent::v4::BatchCreateJobsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateJobs(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::talent::v4::Job> DefaultJobServiceStub::GetJob(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::GetJobRequest const& request) {
  google::cloud::talent::v4::Job response;
  auto status = grpc_stub_->GetJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::talent::v4::Job> DefaultJobServiceStub::UpdateJob(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::UpdateJobRequest const& request) {
  google::cloud::talent::v4::Job response;
  auto status = grpc_stub_->UpdateJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncBatchUpdateJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::talent::v4::BatchUpdateJobsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::talent::v4::BatchUpdateJobsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchUpdateJobs(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::DeleteJob(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::DeleteJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncBatchDeleteJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::talent::v4::BatchDeleteJobsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::talent::v4::BatchDeleteJobsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchDeleteJobs(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::talent::v4::ListJobsResponse>
DefaultJobServiceStub::ListJobs(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::ListJobsRequest const& request) {
  google::cloud::talent::v4::ListJobsResponse response;
  auto status = grpc_stub_->ListJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
DefaultJobServiceStub::SearchJobs(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  google::cloud::talent::v4::SearchJobsResponse response;
  auto status = grpc_stub_->SearchJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
DefaultJobServiceStub::SearchJobsForAlert(
    grpc::ClientContext& client_context,
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  google::cloud::talent::v4::SearchJobsResponse response;
  auto status =
      grpc_stub_->SearchJobsForAlert(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncGetOperation(
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

future<Status> DefaultJobServiceStub::AsyncCancelOperation(
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
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
