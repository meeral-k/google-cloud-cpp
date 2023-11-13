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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#include "google/cloud/aiplatform/v1/internal/specialist_pool_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SpecialistPoolServiceTracingStub::SpecialistPoolServiceTracingStub(
    std::shared_ptr<SpecialistPoolServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
SpecialistPoolServiceTracingStub::AsyncCreateSpecialistPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.SpecialistPoolService",
                             "CreateSpecialistPool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSpecialistPool(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceTracingStub::GetSpecialistPool(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.SpecialistPoolService", "GetSpecialistPool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSpecialistPool(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListSpecialistPoolsResponse>
SpecialistPoolServiceTracingStub::ListSpecialistPools(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListSpecialistPoolsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.SpecialistPoolService",
                             "ListSpecialistPools");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSpecialistPools(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SpecialistPoolServiceTracingStub::AsyncDeleteSpecialistPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.SpecialistPoolService",
                             "DeleteSpecialistPool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSpecialistPool(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
SpecialistPoolServiceTracingStub::AsyncUpdateSpecialistPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.SpecialistPoolService",
                             "UpdateSpecialistPool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSpecialistPool(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
SpecialistPoolServiceTracingStub::AsyncGetOperation(
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

future<Status> SpecialistPoolServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<SpecialistPoolServiceStub> MakeSpecialistPoolServiceTracingStub(
    std::shared_ptr<SpecialistPoolServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SpecialistPoolServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
