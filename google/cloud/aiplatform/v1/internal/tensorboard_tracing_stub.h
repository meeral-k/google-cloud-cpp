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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_TENSORBOARD_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_TENSORBOARD_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/tensorboard_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TensorboardServiceTracingStub : public TensorboardServiceStub {
 public:
  ~TensorboardServiceTracingStub() override = default;

  explicit TensorboardServiceTracingStub(
      std::shared_ptr<TensorboardServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Tensorboard> GetTensorboard(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetTensorboardRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardsResponse>
  ListTensorboards(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListTensorboardsRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
  ReadTensorboardUsage(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
  ReadTensorboardSize(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  CreateTensorboardExperiment(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  GetTensorboardExperiment(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  UpdateTensorboardExperiment(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse>
  ListTensorboardExperiments(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardExperiment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardRun> CreateTensorboardRun(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateTensorboardRunRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
  BatchCreateTensorboardRuns(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardRun> GetTensorboardRun(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardRun> UpdateTensorboardRun(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardRunsResponse>
  ListTensorboardRuns(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListTensorboardRunsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTensorboardRun(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request)
      override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
  BatchCreateTensorboardTimeSeries(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          BatchCreateTensorboardTimeSeriesRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  CreateTensorboardTimeSeries(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  GetTensorboardTimeSeries(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  UpdateTensorboardTimeSeries(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse>
  ListTensorboardTimeSeries(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardTimeSeries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
  BatchReadTensorboardTimeSeriesData(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          BatchReadTensorboardTimeSeriesDataRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
  ReadTensorboardTimeSeriesData(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
          request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>
  ReadTensorboardBlobData(
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
  WriteTensorboardExperimentData(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          WriteTensorboardExperimentDataRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
  WriteTensorboardRunData(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse>
  ExportTensorboardTimeSeriesData(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          ExportTensorboardTimeSeriesDataRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<TensorboardServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TensorboardServiceStub> MakeTensorboardServiceTracingStub(
    std::shared_ptr<TensorboardServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_TENSORBOARD_TRACING_STUB_H
