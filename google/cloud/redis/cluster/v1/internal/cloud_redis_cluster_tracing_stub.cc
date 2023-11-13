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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudRedisClusterTracingStub::CloudRedisClusterTracingStub(
    std::shared_ptr<CloudRedisClusterStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::redis::cluster::v1::ListClustersResponse>
CloudRedisClusterTracingStub::ListClusters(
    grpc::ClientContext& context,
    google::cloud::redis::cluster::v1::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.redis.cluster.v1.CloudRedisCluster", "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, request));
}

StatusOr<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterTracingStub::GetCluster(
    grpc::ClientContext& context,
    google::cloud::redis::cluster::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.redis.cluster.v1.CloudRedisCluster", "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterTracingStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.redis.cluster.v1.CloudRedisCluster", "UpdateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateCluster(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterTracingStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.redis.cluster.v1.CloudRedisCluster", "DeleteCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteCluster(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterTracingStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.redis.cluster.v1.CloudRedisCluster", "CreateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateCluster(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterTracingStub::AsyncGetOperation(
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

future<Status> CloudRedisClusterTracingStub::AsyncCancelOperation(
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

std::shared_ptr<CloudRedisClusterStub> MakeCloudRedisClusterTracingStub(
    std::shared_ptr<CloudRedisClusterStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudRedisClusterTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google
