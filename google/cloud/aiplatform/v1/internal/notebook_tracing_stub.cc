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

#include "google/cloud/aiplatform/v1/internal/notebook_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotebookServiceTracingStub::NotebookServiceTracingStub(
    std::shared_ptr<NotebookServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncCreateNotebookRuntimeTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateNotebookRuntimeTemplateRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.NotebookService",
                             "CreateNotebookRuntimeTemplate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateNotebookRuntimeTemplate(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>
NotebookServiceTracingStub::GetNotebookRuntimeTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNotebookRuntimeTemplateRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.NotebookService",
                             "GetNotebookRuntimeTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetNotebookRuntimeTemplate(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesResponse>
NotebookServiceTracingStub::ListNotebookRuntimeTemplates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.NotebookService",
                             "ListNotebookRuntimeTemplates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListNotebookRuntimeTemplates(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDeleteNotebookRuntimeTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeTemplateRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.NotebookService",
                             "DeleteNotebookRuntimeTemplate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteNotebookRuntimeTemplate(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>
NotebookServiceTracingStub::UpdateNotebookRuntimeTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateNotebookRuntimeTemplateRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.NotebookService",
                             "UpdateNotebookRuntimeTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateNotebookRuntimeTemplate(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncAssignNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.NotebookService", "AssignNotebookRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncAssignNotebookRuntime(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::NotebookRuntime>
NotebookServiceTracingStub::GetNotebookRuntime(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNotebookRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.NotebookService", "GetNotebookRuntime");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetNotebookRuntime(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListNotebookRuntimesResponse>
NotebookServiceTracingStub::ListNotebookRuntimes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNotebookRuntimesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.NotebookService", "ListNotebookRuntimes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListNotebookRuntimes(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncDeleteNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.NotebookService", "DeleteNotebookRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteNotebookRuntime(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncUpgradeNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.NotebookService", "UpgradeNotebookRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpgradeNotebookRuntime(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncStartNotebookRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.NotebookService", "StartNotebookRuntime");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStartNotebookRuntime(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> NotebookServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<NotebookServiceStub> MakeNotebookServiceTracingStub(
    std::shared_ptr<NotebookServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NotebookServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
