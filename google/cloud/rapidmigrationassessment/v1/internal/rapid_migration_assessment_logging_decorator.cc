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
// source:
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RapidMigrationAssessmentLogging::RapidMigrationAssessmentLogging(
    std::shared_ptr<RapidMigrationAssessmentStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncCreateCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 CreateCollectorRequest const& request) {
        return child_->AsyncCreateCollector(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncCreateAnnotation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 CreateAnnotationRequest const& request) {
        return child_->AsyncCreateAnnotation(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>
RapidMigrationAssessmentLogging::GetAnnotation(
    grpc::ClientContext& context,
    google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::rapidmigrationassessment::v1::
                 GetAnnotationRequest const& request) {
        return child_->GetAnnotation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::ListCollectorsResponse>
RapidMigrationAssessmentLogging::ListCollectors(
    grpc::ClientContext& context,
    google::cloud::rapidmigrationassessment::v1::ListCollectorsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::rapidmigrationassessment::v1::
                 ListCollectorsRequest const& request) {
        return child_->ListCollectors(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>
RapidMigrationAssessmentLogging::GetCollector(
    grpc::ClientContext& context,
    google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::rapidmigrationassessment::v1::
                 GetCollectorRequest const& request) {
        return child_->GetCollector(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncUpdateCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 UpdateCollectorRequest const& request) {
        return child_->AsyncUpdateCollector(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncDeleteCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 DeleteCollectorRequest const& request) {
        return child_->AsyncDeleteCollector(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncResumeCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 ResumeCollectorRequest const& request) {
        return child_->AsyncResumeCollector(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncRegisterCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 RegisterCollectorRequest const& request) {
        return child_->AsyncRegisterCollector(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncPauseCollector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::rapidmigrationassessment::v1::
                 PauseCollectorRequest const& request) {
        return child_->AsyncPauseCollector(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RapidMigrationAssessmentLogging::AsyncGetOperation(
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

future<Status> RapidMigrationAssessmentLogging::AsyncCancelOperation(
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
}  // namespace rapidmigrationassessment_v1_internal
}  // namespace cloud
}  // namespace google
