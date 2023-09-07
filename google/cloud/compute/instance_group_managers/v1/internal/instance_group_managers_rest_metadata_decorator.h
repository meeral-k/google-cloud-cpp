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
// source:
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_INSTANCE_GROUP_MANAGERS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_INSTANCE_GROUP_MANAGERS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_group_managers/v1/instance_group_managers.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupManagersRestMetadata : public InstanceGroupManagersRestStub {
 public:
  ~InstanceGroupManagersRestMetadata() override = default;
  explicit InstanceGroupManagersRestMetadata(
      std::shared_ptr<InstanceGroupManagersRestStub> child,
      std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAbandonInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          AbandonInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>
  AggregatedListInstanceGroupManagers(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          AggregatedListInstanceGroupManagersRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncApplyUpdatesToInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncCreateInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          CreateInstancesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstanceGroupManagers(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeleteInstanceGroupManagersRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeleteInstancesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
  GetInstanceGroupManagers(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          GetInstanceGroupManagersRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInstanceGroupManagers(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          InsertInstanceGroupManagersRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerList>
  ListInstanceGroupManagers(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListInstanceGroupManagersRequest const& request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::InstanceGroupManagersListErrorsResponse>
  ListErrors(google::cloud::rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ListErrorsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               InstanceGroupManagersListManagedInstancesResponse>
  ListManagedInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListManagedInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               InstanceGroupManagersListPerInstanceConfigsResp>
  ListPerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListPerInstanceConfigsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchInstanceGroupManagers(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          PatchInstanceGroupManagersRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRecreateInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          RecreateInstancesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncResize(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          ResizeRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetInstanceTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          SetInstanceTemplateRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetTargetPools(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          SetTargetPoolsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdatePerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<InstanceGroupManagersRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_INSTANCE_GROUP_MANAGERS_REST_METADATA_DECORATOR_H
