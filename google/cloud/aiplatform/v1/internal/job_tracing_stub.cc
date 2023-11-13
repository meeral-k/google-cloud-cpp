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
// source: google/cloud/aiplatform/v1/job_service.proto

#include "google/cloud/aiplatform/v1/internal/job_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

JobServiceTracingStub::JobServiceTracingStub(
    std::shared_ptr<JobServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceTracingStub::CreateCustomJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CreateCustomJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCustomJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceTracingStub::GetCustomJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetCustomJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCustomJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
JobServiceTracingStub::ListCustomJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListCustomJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCustomJobs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncDeleteCustomJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "DeleteCustomJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteCustomJob(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status JobServiceTracingStub::CancelCustomJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CancelCustomJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelCustomJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceTracingStub::CreateDataLabelingJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CreateDataLabelingJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDataLabelingJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceTracingStub::GetDataLabelingJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetDataLabelingJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataLabelingJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
JobServiceTracingStub::ListDataLabelingJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListDataLabelingJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDataLabelingJobs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncDeleteDataLabelingJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "DeleteDataLabelingJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDataLabelingJob(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status JobServiceTracingStub::CancelDataLabelingJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CancelDataLabelingJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelDataLabelingJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceTracingStub::CreateHyperparameterTuningJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CreateHyperparameterTuningJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateHyperparameterTuningJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceTracingStub::GetHyperparameterTuningJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetHyperparameterTuningJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetHyperparameterTuningJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
JobServiceTracingStub::ListHyperparameterTuningJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListHyperparameterTuningJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListHyperparameterTuningJobs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncDeleteHyperparameterTuningJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "DeleteHyperparameterTuningJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteHyperparameterTuningJob(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status JobServiceTracingStub::CancelHyperparameterTuningJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CancelHyperparameterTuningJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CancelHyperparameterTuningJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
JobServiceTracingStub::CreateNasJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CreateNasJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateNasJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
JobServiceTracingStub::GetNasJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetNasJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetNasJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse>
JobServiceTracingStub::ListNasJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListNasJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListNasJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNasJobs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncDeleteNasJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "DeleteNasJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteNasJob(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status JobServiceTracingStub::CancelNasJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CancelNasJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelNasJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
JobServiceTracingStub::GetNasTrialDetail(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetNasTrialDetail");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNasTrialDetail(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
JobServiceTracingStub::ListNasTrialDetails(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListNasTrialDetails");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNasTrialDetails(context, request));
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceTracingStub::CreateBatchPredictionJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CreateBatchPredictionJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateBatchPredictionJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceTracingStub::GetBatchPredictionJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetBatchPredictionJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBatchPredictionJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
JobServiceTracingStub::ListBatchPredictionJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListBatchPredictionJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBatchPredictionJobs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncDeleteBatchPredictionJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "DeleteBatchPredictionJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteBatchPredictionJob(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status JobServiceTracingStub::CancelBatchPredictionJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CancelBatchPredictionJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelBatchPredictionJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceTracingStub::CreateModelDeploymentMonitoringJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "CreateModelDeploymentMonitoringJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateModelDeploymentMonitoringJob(context, request));
}

StatusOr<google::cloud::aiplatform::v1::
             SearchModelDeploymentMonitoringStatsAnomaliesResponse>
JobServiceTracingStub::SearchModelDeploymentMonitoringStatsAnomalies(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        SearchModelDeploymentMonitoringStatsAnomaliesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                             "SearchModelDeploymentMonitoringStatsAnomalies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SearchModelDeploymentMonitoringStatsAnomalies(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceTracingStub::GetModelDeploymentMonitoringJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetModelDeploymentMonitoringJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "GetModelDeploymentMonitoringJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetModelDeploymentMonitoringJob(context, request));
}

StatusOr<
    google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
JobServiceTracingStub::ListModelDeploymentMonitoringJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        ListModelDeploymentMonitoringJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ListModelDeploymentMonitoringJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListModelDeploymentMonitoringJobs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncUpdateModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "UpdateModelDeploymentMonitoringJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateModelDeploymentMonitoringJob(cq, context, options,
                                                           request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncDeleteModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "DeleteModelDeploymentMonitoringJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteModelDeploymentMonitoringJob(cq, context, options,
                                                           request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status JobServiceTracingStub::PauseModelDeploymentMonitoringJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "PauseModelDeploymentMonitoringJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->PauseModelDeploymentMonitoringJob(context, request));
}

Status JobServiceTracingStub::ResumeModelDeploymentMonitoringJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.JobService",
                                     "ResumeModelDeploymentMonitoringJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ResumeModelDeploymentMonitoringJob(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> JobServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<JobServiceStub> MakeJobServiceTracingStub(
    std::shared_ptr<JobServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<JobServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
