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
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/internal/service_usage_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/api/serviceusage/v1/serviceusage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace serviceusage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceUsageMetadata::ServiceUsageMetadata(
    std::shared_ptr<ServiceUsageStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncEnableService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::EnableServiceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncEnableService(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncDisableService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::DisableServiceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDisableService(cq, std::move(context), request);
}

StatusOr<google::api::serviceusage::v1::Service>
ServiceUsageMetadata::GetService(
    grpc::ClientContext& context,
    google::api::serviceusage::v1::GetServiceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetService(context, request);
}

StatusOr<google::api::serviceusage::v1::ListServicesResponse>
ServiceUsageMetadata::ListServices(
    grpc::ClientContext& context,
    google::api::serviceusage::v1::ListServicesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListServices(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncBatchEnableServices(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::BatchEnableServicesRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncBatchEnableServices(cq, std::move(context), request);
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
ServiceUsageMetadata::BatchGetServices(
    grpc::ClientContext& context,
    google::api::serviceusage::v1::BatchGetServicesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->BatchGetServices(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ServiceUsageMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ServiceUsageMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ServiceUsageMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_internal
}  // namespace cloud
}  // namespace google
