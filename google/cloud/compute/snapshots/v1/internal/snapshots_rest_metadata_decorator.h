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
// source: google/cloud/compute/snapshots/v1/snapshots.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_INTERNAL_SNAPSHOTS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_INTERNAL_SNAPSHOTS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/snapshots/v1/internal/snapshots_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/snapshots/v1/snapshots.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_snapshots_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SnapshotsRestMetadata : public SnapshotsRestStub {
 public:
  ~SnapshotsRestMetadata() override = default;
  explicit SnapshotsRestMetadata(std::shared_ptr<SnapshotsRestStub> child,
                                 std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSnapshots(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::snapshots::v1::DeleteSnapshotsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Snapshot> GetSnapshots(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::snapshots::v1::GetSnapshotsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::snapshots::v1::GetIamPolicyRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSnapshots(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::snapshots::v1::InsertSnapshotsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::SnapshotList> ListSnapshots(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::snapshots::v1::ListSnapshotsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::snapshots::v1::SetIamPolicyRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::snapshots::v1::SetLabelsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::snapshots::v1::
                         TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<SnapshotsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshots_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_INTERNAL_SNAPSHOTS_REST_METADATA_DECORATOR_H
