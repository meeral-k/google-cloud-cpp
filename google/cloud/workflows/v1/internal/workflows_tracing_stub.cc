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
// source: google/cloud/workflows/v1/workflows.proto

#include "google/cloud/workflows/v1/internal/workflows_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace workflows_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowsTracingStub::WorkflowsTracingStub(std::shared_ptr<WorkflowsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::workflows::v1::ListWorkflowsResponse>
WorkflowsTracingStub::ListWorkflows(
    grpc::ClientContext& context,
    google::cloud::workflows::v1::ListWorkflowsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "ListWorkflows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListWorkflows(context, request));
}

StatusOr<google::cloud::workflows::v1::Workflow>
WorkflowsTracingStub::GetWorkflow(
    grpc::ClientContext& context,
    google::cloud::workflows::v1::GetWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "GetWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetWorkflow(context, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncCreateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "CreateWorkflow");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateWorkflow(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncDeleteWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "DeleteWorkflow");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteWorkflow(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncUpdateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "UpdateWorkflow");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateWorkflow(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncGetOperation(
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

future<Status> WorkflowsTracingStub::AsyncCancelOperation(
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

std::shared_ptr<WorkflowsStub> MakeWorkflowsTracingStub(
    std::shared_ptr<WorkflowsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<WorkflowsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1_internal
}  // namespace cloud
}  // namespace google
