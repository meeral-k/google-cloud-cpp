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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_LOGGING_DECORATOR_H

#include "google/cloud/batch/v1/internal/batch_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace batch_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BatchServiceLogging : public BatchServiceStub {
 public:
  ~BatchServiceLogging() override = default;
  BatchServiceLogging(std::shared_ptr<BatchServiceStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> const& components);

  StatusOr<google::cloud::batch::v1::Job> CreateJob(
      grpc::ClientContext& context,
      google::cloud::batch::v1::CreateJobRequest const& request) override;

  StatusOr<google::cloud::batch::v1::Job> GetJob(
      grpc::ClientContext& context,
      google::cloud::batch::v1::GetJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::batch::v1::DeleteJobRequest const& request) override;

  StatusOr<google::cloud::batch::v1::ListJobsResponse> ListJobs(
      grpc::ClientContext& context,
      google::cloud::batch::v1::ListJobsRequest const& request) override;

  StatusOr<google::cloud::batch::v1::Task> GetTask(
      grpc::ClientContext& context,
      google::cloud::batch::v1::GetTaskRequest const& request) override;

  StatusOr<google::cloud::batch::v1::ListTasksResponse> ListTasks(
      grpc::ClientContext& context,
      google::cloud::batch::v1::ListTasksRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<BatchServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // BatchServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_LOGGING_DECORATOR_H
