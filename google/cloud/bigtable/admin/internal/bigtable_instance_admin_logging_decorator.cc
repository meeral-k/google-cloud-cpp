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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableInstanceAdminLogging::BigtableInstanceAdminLogging(
    std::shared_ptr<BigtableInstanceAdminStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::CreateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::CreateInstanceRequest const& request) {
        return child_->AsyncCreateInstance(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminLogging::GetInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetInstanceRequest const& request) {
        return child_->GetInstance(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminLogging::ListInstances(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::ListInstancesRequest const& request) {
        return child_->ListInstances(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminLogging::UpdateInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::Instance const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::Instance const& request) {
        return child_->UpdateInstance(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncPartialUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::bigtable::admin::v2::PartialUpdateInstanceRequest const&
                 request) {
        return child_->AsyncPartialUpdateInstance(cq, std::move(context),
                                                  options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

Status BigtableInstanceAdminLogging::DeleteInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
        return child_->DeleteInstance(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::bigtable::admin::v2::CreateClusterRequest const& request) {
        return child_->AsyncCreateCluster(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminLogging::GetCluster(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetClusterRequest const& request) {
        return child_->GetCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminLogging::ListClusters(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::ListClustersRequest const& request) {
        return child_->ListClusters(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::Cluster const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::bigtable::admin::v2::Cluster const& request) {
        return child_->AsyncUpdateCluster(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncPartialUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::bigtable::admin::v2::PartialUpdateClusterRequest const&
                 request) {
        return child_->AsyncPartialUpdateCluster(cq, std::move(context),
                                                 options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

Status BigtableInstanceAdminLogging::DeleteCluster(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::DeleteClusterRequest const& request) {
        return child_->DeleteCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminLogging::CreateAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
        return child_->CreateAppProfile(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminLogging::GetAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetAppProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetAppProfileRequest const& request) {
        return child_->GetAppProfile(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
BigtableInstanceAdminLogging::ListAppProfiles(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListAppProfilesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::ListAppProfilesRequest const& request) {
        return child_->ListAppProfiles(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncUpdateAppProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
        return child_->AsyncUpdateAppProfile(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

Status BigtableInstanceAdminLogging::DeleteAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
        return child_->DeleteAppProfile(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::ListHotTabletsResponse>
BigtableInstanceAdminLogging::ListHotTablets(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListHotTabletsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::ListHotTabletsRequest const& request) {
        return child_->ListHotTablets(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminLogging::AsyncGetOperation(
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

future<Status> BigtableInstanceAdminLogging::AsyncCancelOperation(
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
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
