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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/v1/internal/service_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/api/servicemanagement/v1/servicemanager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceManagerLogging::ServiceManagerLogging(
    std::shared_ptr<ServiceManagerStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::api::servicemanagement::v1::ListServicesResponse>
ServiceManagerLogging::ListServices(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::ListServicesRequest const&
                 request) { return child_->ListServices(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerLogging::GetService(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::GetServiceRequest const&
                 request) { return child_->GetService(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerLogging::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::api::servicemanagement::v1::CreateServiceRequest const&
                 request) {
        return child_->AsyncCreateService(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerLogging::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::api::servicemanagement::v1::DeleteServiceRequest const&
                 request) {
        return child_->AsyncDeleteService(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerLogging::AsyncUndeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::api::servicemanagement::v1::UndeleteServiceRequest const&
                 request) {
        return child_->AsyncUndeleteService(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::api::servicemanagement::v1::ListServiceConfigsResponse>
ServiceManagerLogging::ListServiceConfigs(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::api::servicemanagement::v1::ListServiceConfigsRequest const&
              request) { return child_->ListServiceConfigs(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::Service> ServiceManagerLogging::GetServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::GetServiceConfigRequest const&
                 request) {
        return child_->GetServiceConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::Service> ServiceManagerLogging::CreateServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::api::servicemanagement::v1::CreateServiceConfigRequest const&
              request) {
        return child_->CreateServiceConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerLogging::AsyncSubmitConfigSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
              request) {
        return child_->AsyncSubmitConfigSource(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::api::servicemanagement::v1::ListServiceRolloutsResponse>
ServiceManagerLogging::ListServiceRollouts(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
              request) {
        return child_->ListServiceRollouts(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerLogging::GetServiceRollout(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::GetServiceRolloutRequest const&
                 request) {
        return child_->GetServiceRollout(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerLogging::AsyncCreateServiceRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
              request) {
        return child_->AsyncCreateServiceRollout(cq, std::move(context),
                                                 options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerLogging::GenerateConfigReport(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::api::servicemanagement::v1::GenerateConfigReportRequest const&
              request) {
        return child_->GenerateConfigReport(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> ServiceManagerLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1_internal
}  // namespace cloud
}  // namespace google
