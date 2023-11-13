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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#include "google/cloud/monitoring/metricsscope/v1/internal/metrics_scopes_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/monitoring/metricsscope/v1/metrics_scopes.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_metricsscope_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricsScopesStub::~MetricsScopesStub() = default;

StatusOr<google::monitoring::metricsscope::v1::MetricsScope>
DefaultMetricsScopesStub::GetMetricsScope(
    grpc::ClientContext& client_context,
    google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
        request) {
  google::monitoring::metricsscope::v1::MetricsScope response;
  auto status =
      grpc_stub_->GetMetricsScope(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::metricsscope::v1::
             ListMetricsScopesByMonitoredProjectResponse>
DefaultMetricsScopesStub::ListMetricsScopesByMonitoredProject(
    grpc::ClientContext& client_context,
    google::monitoring::metricsscope::v1::
        ListMetricsScopesByMonitoredProjectRequest const& request) {
  google::monitoring::metricsscope::v1::
      ListMetricsScopesByMonitoredProjectResponse response;
  auto status = grpc_stub_->ListMetricsScopesByMonitoredProject(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultMetricsScopesStub::AsyncCreateMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::monitoring::metricsscope::v1::
                 CreateMonitoredProjectRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateMonitoredProject(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultMetricsScopesStub::AsyncDeleteMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::monitoring::metricsscope::v1::
                 DeleteMonitoredProjectRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteMonitoredProject(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultMetricsScopesStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultMetricsScopesStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1_internal
}  // namespace cloud
}  // namespace google
