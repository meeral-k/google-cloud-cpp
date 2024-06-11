// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/notebook_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_NOTEBOOK_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_NOTEBOOK_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/notebook_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NotebookServiceTracingStub : public NotebookServiceStub {
 public:
  ~NotebookServiceTracingStub() override = default;

  explicit NotebookServiceTracingStub(
      std::shared_ptr<NotebookServiceStub> child);

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateNotebookRuntimeTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateNotebookRuntimeTemplateRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>
  GetNotebookRuntimeTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetNotebookRuntimeTemplateRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesResponse>
  ListNotebookRuntimeTemplates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteNotebookRuntimeTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteNotebookRuntimeTemplateRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>
  UpdateNotebookRuntimeTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateNotebookRuntimeTemplateRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncAssignNotebookRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::NotebookRuntime> GetNotebookRuntime(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetNotebookRuntimeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListNotebookRuntimesResponse>
  ListNotebookRuntimes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListNotebookRuntimesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNotebookRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeNotebookRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartNotebookRuntime(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<NotebookServiceStub> child_;
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
std::shared_ptr<NotebookServiceStub> MakeNotebookServiceTracingStub(
    std::shared_ptr<NotebookServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_NOTEBOOK_TRACING_STUB_H
