// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_auth_decorator.h"
#include <google/spanner/admin/instance/v1/spanner_instance_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminAuth::InstanceAdminAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<InstanceAdminStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
InstanceAdminAuth::ListInstanceConfigs(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstanceConfigs(context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminAuth::GetInstanceConfig(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInstanceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncCreateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInstanceConfig(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
InstanceAdminAuth::CreateInstanceConfig(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInstanceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateInstanceConfig(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
InstanceAdminAuth::UpdateInstanceConfig(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInstanceConfig(context, options, request);
}

Status InstanceAdminAuth::DeleteInstanceConfig(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInstanceConfig(context, options, request);
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
InstanceAdminAuth::ListInstanceConfigOperations(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstanceConfigOperations(context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
InstanceAdminAuth::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstances(context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancePartitionsResponse>
InstanceAdminAuth::ListInstancePartitions(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::ListInstancePartitionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstancePartitions(context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminAuth::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> InstanceAdminAuth::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateInstance(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> InstanceAdminAuth::UpdateInstance(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInstance(context, options, request);
}

Status InstanceAdminAuth::DeleteInstance(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInstance(context, options, request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::InstancePartition>
InstanceAdminAuth::GetInstancePartition(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInstancePartition(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncCreateInstancePartition(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInstancePartition(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
InstanceAdminAuth::CreateInstancePartition(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInstancePartition(context, options, request);
}

Status InstanceAdminAuth::DeleteInstancePartition(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::DeleteInstancePartitionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInstancePartition(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncUpdateInstancePartition(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateInstancePartition(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
InstanceAdminAuth::UpdateInstancePartition(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInstancePartition(context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::
             ListInstancePartitionOperationsResponse>
InstanceAdminAuth::ListInstancePartitionOperations(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::instance::v1::
        ListInstancePartitionOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstancePartitionOperations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncMoveInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::MoveInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncMoveInstance(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> InstanceAdminAuth::MoveInstance(
    grpc::ClientContext& context, Options options,
    google::spanner::admin::instance::v1::MoveInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MoveInstance(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
InstanceAdminAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> InstanceAdminAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status InstanceAdminAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status InstanceAdminAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> InstanceAdminAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
