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
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_INTERNAL_TARGET_HTTPS_PROXIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_INTERNAL_TARGET_HTTPS_PROXIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/target_https_proxies/v1/internal/target_https_proxies_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/target_https_proxies/v1/target_https_proxies.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetHttpsProxiesRestMetadata : public TargetHttpsProxiesRestStub {
 public:
  ~TargetHttpsProxiesRestMetadata() override = default;
  explicit TargetHttpsProxiesRestMetadata(
      std::shared_ptr<TargetHttpsProxiesRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
  AggregatedListTargetHttpsProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          AggregatedListTargetHttpsProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetHttpsProxies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          DeleteTargetHttpsProxiesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetTargetHttpsProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          GetTargetHttpsProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetHttpsProxies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          InsertTargetHttpsProxiesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyList>
  ListTargetHttpsProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          ListTargetHttpsProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchTargetHttpsProxies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          PatchTargetHttpsProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetCertificateMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetCertificateMapRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetQuicOverride(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetQuicOverrideRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSslCertificates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetSslCertificatesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSslPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetSslPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetUrlMapRequest const& request) override;

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

  std::shared_ptr<TargetHttpsProxiesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_INTERNAL_TARGET_HTTPS_PROXIES_REST_METADATA_DECORATOR_H
