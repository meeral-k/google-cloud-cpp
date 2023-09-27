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
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/global_organization_operations/v1/global_organization_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultGlobalOrganizationOperationsRestStub::
    DefaultGlobalOrganizationOperationsRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultGlobalOrganizationOperationsRestStub::
    DefaultGlobalOrganizationOperationsRestStub(
        std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

Status DefaultGlobalOrganizationOperationsRestStub::DeleteOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::
        DeleteOperationRequest const& request) {
  return rest_internal::Delete(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/", "v1", "/", "locations", "/", "global",
                   "/", "operations", "/", request.operation()),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("parent_id", request.parent_id())}));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultGlobalOrganizationOperationsRestStub::GetOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::
        GetOperationRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/", "v1", "/", "locations", "/", "global",
                   "/", "operations", "/", request.operation()),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("parent_id", request.parent_id())}));
}

StatusOr<google::cloud::cpp::compute::v1::OperationList>
DefaultGlobalOrganizationOperationsRestStub::ListGlobalOrganizationOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::
        ListGlobalOrganizationOperationsRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::OperationList>(
      *service_, rest_context, request, false,
      "/compute/v1/locations/global/operations",
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("parent_id", request.parent_id()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1_internal
}  // namespace cloud
}  // namespace google
